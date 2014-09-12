/*jslint indent: 2, nomen: true, maxlen: 120, sloppy: true, vars: true, white: true, plusplus: true */
/*global require, exports, Graph, arguments, ArangoClusterComm, ArangoServerState, ArangoClusterInfo */

////////////////////////////////////////////////////////////////////////////////
/// @brief pregel worker functionality
///
/// @file
///
/// DISCLAIMER
///
/// Copyright 2010-2014 triagens GmbH, Cologne, Germany
///
/// Licensed under the Apache License, Version 2.0 (the "License");
/// you may not use this file except in compliance with the License.
/// You may obtain a copy of the License at
///
///     http://www.apache.org/licenses/LICENSE-2.0
///
/// Unless required by applicable law or agreed to in writing, software
/// distributed under the License is distributed on an "AS IS" BASIS,
/// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
/// See the License for the specific language governing permissions and
/// limitations under the License.
///
/// Copyright holder is triAGENS GmbH, Cologne, Germany
///
/// @author Florian Bartels, Michael Hackstein, Guido Schwab
/// @author Copyright 2011-2014, triAGENS GmbH, Cologne, Germany
////////////////////////////////////////////////////////////////////////////////

var p = require("org/arangodb/profiler");

var internal = require("internal");
var _ = require("underscore");
var db = internal.db;
var arangodb = require("org/arangodb");
var pregel = require("org/arangodb/pregel");
var ERRORS = arangodb.errors;
var ArangoError = arangodb.ArangoError;
var tasks = require("org/arangodb/tasks");

var step = "step";
var stepContent = "stepContent";
var waitForAnswer = "waitForAnswer";
var active = "active";
var state = "state";
var error = "error";
var stateFinished = "finished";
var stateRunning = "running";
var stateError = "error";
var COUNTER = "counter";
var DATA = "data";
var ERR = "error";
var CONDUCTOR = "conductor";
var ALGORITHM = "algorithm";
var MAP = "map";
var id;
var WORKERS = 8;

var queryGetAllSourceEdges = "FOR e IN @@original RETURN "
  + "{ _key: e._key, _from: e._from, _to: e._to";

var queryInsertDefaultVertex = "FOR v IN @@original INSERT {"
  + " '_key' : v._key, 'active' : true, 'deleted' : false, 'result' : {},"
  + " 'locationObject': { '_id': v._id, 'shard': @origShard }";

var queryInsertDefaultVertexIntoPart = "} INTO  @@result";


var queryActivateVertices = "FOR v IN @@work "
  + "FILTER v.toShard == @shard && v.step == @step "
  + "UPDATE PARSE_IDENTIFIER(v._toVertex).key WITH "
  + "{'active' : true} IN @@result";

var queryMessageByShard = "FOR v IN @@message "
  + "FILTER v.toShard == @shardId "
  + "RETURN v";

var queryCountStillActiveVertices = "LET c = (FOR i in @@collection"
  + " FILTER i.active == true && i.deleted == false"
  + " RETURN 1) RETURN LENGTH(c)";

var getQueueName = function (executionNumber, counter) {
  return "P_QUEUE_" + executionNumber + "_" + counter;
};

var translateId = function (id, mapping) {
  var split = id.split("/");
  var col = split[0];
  var key = split[1];
  return mapping.getResultCollection(col) + "/" + key;
};

var algorithmForQueue = function (algorithms, vertices,  executionNumber) {
  return "(function() {"
    + "var executionNumber = " + executionNumber + ";"
    + "var pregel = require('org/arangodb/pregel');"
    + "var pregelMapping = new pregel.Mapping(executionNumber);"
    + "var worker = pregel.Worker;"
    + "var data = [];"
    + "var lastStep;"
    + (algorithms.aggregator ? "  var aggregator = (" + algorithms.aggregator + ");" : "var aggregator = null;")
    + "var vertices = " + JSON.stringify(vertices) + ";"
    + "Object.keys(vertices).forEach(function(key) {"
    +   "if(key === '__actives'){ return; }"
    +   "vertices[key] = new pregel.Vertex(vertices[key], pregelMapping, vertices);"
    + "});"
    + "var queue = new pregel.MessageQueue(executionNumber, vertices, aggregator);"
    + "return function(params) {"
    + "if (params.cleanUp) {"
    +   "Object.keys(vertices).forEach(function(key) {"
    +     "if(key === '__actives'){ return; }"
    +     "vertices[key]._save();"
    +   "});"
    + "  return;"
    + "}"
    + "var step = params.step;"
    + "queue._fillQueues();"
    + "var global = params.global;"
    + "global.step = step;"
    + "if (step !== lastStep) {"
    + "  data = [];"
    + "}"
    + "global.data = data;"
    + "try {"
    + "  Object.keys(vertices).forEach(function (v) {"
    + "    if (v === '__actives') return;"
    + "    var vertex = vertices[v];"
    + "    if (global.final === true) {"
    + "      (" + algorithms.finalAlgorithm + ")(vertex,queue[vertex._id],global);"
    + "    } else {"
    + "      if (!vertex._isActive()) {"
    + "        return; "
    + "      }"
    + "      (" + algorithms.algorithm + ")(vertex,queue[vertex._id],global);"
    + "    }"
    + "  });"
    + "  queue._storeInCollection();"
    + "  worker.queueDone(executionNumber, global, vertices.__actives, pregelMapping);"
    + "  } catch (err) {"
    + "    worker.queueDone(executionNumber, global, vertices.__actives, pregelMapping, err);"
    + "  }"
    + "}"
    + "}())";
};

var  createTaskQueue = function (executionNumber, vertices,  algorithms, workerIndex) {
  tasks.createNamedQueue({
    name: getQueueName(executionNumber, workerIndex),
    threads: 1,
    size: 1,
    worker: algorithmForQueue(algorithms, vertices, executionNumber)
  });
};

var addTask = function (queue, stepNumber, globals) {
  tasks.addJob(
    queue,
    {
      step: stepNumber,
      global: globals
    }
  );
};

var addCleanUpTask = function (queue) {
  tasks.addJob(
    queue,
    {
      cleanUp: true
    }
  );
};

var saveMapping = function(executionNumber, map) {
  map._key = "map";
  pregel.getGlobalCollection(executionNumber).save(map);
};

var loadMapping = function(executionNumber) {
  return pregel.getMap(executionNumber);
};

var getConductor = function(executionNumber) {
  return pregel.getGlobalCollection(executionNumber).document(CONDUCTOR).name;
};

var getError = function(executionNumber) {
  return pregel.getGlobalCollection(executionNumber).document(ERR).error;
};

var setup = function(executionNumber, options) {
  // create global collection
  pregel.createWorkerCollections(executionNumber);
  p.setup();
  var global = pregel.getGlobalCollection(executionNumber);
  global.save({_key: COUNTER, count: 0, active: 0});
  global.save({_key: DATA, data: []});
  global.save({_key: ERR, error: undefined});
  global.save({_key: CONDUCTOR, name: options.conductor});

  saveMapping(executionNumber, options.map);

  var map = options.map.map;
  var collectionMapping = {};
  var pregelMapping = new pregel.Mapping(executionNumber);
  var w;
  var vertices;
  for (w = 0; w < WORKERS; w++) {
    vertices = {};
    vertices.__actives = 0;
    _.each(pregelMapping.getLocalCollectionShardMapping(), function (shards) {
      var i;
      for (i = 0; i < shards.length; i++) {
        db[shards[i]].NTH(w, WORKERS).documents.forEach(function (d)  {
          vertices[d._id] = d;
          vertices.__actives++;
          vertices[d._id]._locationInfo = {
            shard: shards[i],
            _id: d._id
          };
        });
      }
    });
    createTaskQueue(executionNumber, vertices, options, w);
  }
};


var activateVertices = function(executionNumber, step, mapping) {
  var t = p.stopWatch();
  var work = pregel.genWorkCollectionName(executionNumber);
  var resultShardMapping = mapping.getLocalResultShardMapping();
  _.each(resultShardMapping, function (resultShards, collection) {
    var originalShards = mapping.getLocalCollectionShards(collection);
    var i;
    var bindVars;
    for (i = 0; i < resultShards.length; i++) {
      bindVars = {
        '@work': work,
        '@result': resultShards[i],
        'shard': originalShards[i],
        'step': step
      };
      db._query(queryActivateVertices, bindVars).execute();
    }
  });
  p.storeWatch("ActivateVertices", t);
};

///////////////////////////////////////////////////////////
/// @brief Creates a cursor containing all active vertices
///////////////////////////////////////////////////////////
var getActiveVerticesQuery = function (mapping) {
  var count = 0;
  var bindVars = {};
  var query = "FOR u in UNION([], []";
  var resultShardMapping = mapping.getLocalResultShardMapping();
  _.each(resultShardMapping, function (resultShards) {
    var i;
    for (i = 0; i < resultShards.length; i++) {
      query += ",(FOR i in @@collection" + count
        + " FILTER i.active == true && i.deleted == false"
        + " RETURN {_id: i._id, shard: @collection" + count 
        + ", locationObject: i.locationObject, _doc: i})";
      bindVars["@collection" + count] = resultShards[i];
      bindVars["collection" + count] = resultShards[i];
      count++;
    }
  });
  query += ") RETURN u";
  return db._query(query, bindVars);
};

var getVerticesQuery = function (mapping) {
  var count = 0;
  var bindVars = {};
  var query = "FOR u in UNION([], []";
  var resultShardMapping = mapping.getLocalResultShardMapping();
  _.each(resultShardMapping, function (resultShards) {
    var i;
    for (i = 0; i < resultShards.length; i++) {
      query += ",(FOR i in @@collection" + count
        + " FILTER i.deleted == false"
        + " RETURN {_id: i._id, shard: @collection" + count
        + ", locationObject: i.locationObject, _doc: i})";
      bindVars["@collection" + count] = resultShards[i];
      bindVars["collection" + count] = resultShards[i];
      count++;
    }
  });
  query += ") RETURN u";
  return db._query(query, bindVars);
};


var countActiveVertices = function (mapping) {
  var count = 0;
  var bindVars = {};
  var resultShardMapping = mapping.getLocalResultShardMapping();
  _.each(resultShardMapping, function (resultShards) {
    var i;
    for (i = 0; i < resultShards.length; i++) {
      bindVars["@collection"] = resultShards[i];
      count += db._query(queryCountStillActiveVertices, bindVars).next();
    }
  });
  return count;
};

var sendMessages = function (executionNumber, mapping) {
  var msgCol = pregel.getMsgCollection(executionNumber);
  var workCol = pregel.getWorkCollection(executionNumber);
  if (ArangoServerState.role() === "PRIMARY") {
    var waitCounter = 0;
    var shardList = mapping.getGlobalCollectionShards();
    var batchSize = 100;
    var bindVars = {
      "@message": msgCol.name()
    };
    var coordOptions = {
      coordTransactionID: ArangoClusterInfo.uniqid()
    };
    _.each(shardList, function (shard) {
      bindVars.shardId = shard;
      var q = db._query(queryMessageByShard, bindVars);
      var toSend;
      while (q.hasNext()) {
        toSend = JSON.stringify(q.next(batchSize));
        waitCounter++;
        ArangoClusterComm.asyncRequest("POST","shard:" + shard, db._name(),
          "/_api/import?type=array&collection=" + workCol.name(), toSend, {}, coordOptions);
      }
    });
    var debug;
    for (waitCounter; waitCounter > 0; waitCounter--) {
      debug = ArangoClusterComm.wait(coordOptions);
    }
  } else {
    var cursor = msgCol.all();
    var next;
    while(cursor.hasNext()) {
      next = cursor.next();
      workCol.save(next);
    }
  }
  msgCol.truncate();
};

var finishedStep = function (executionNumber, global, mapping, active) {
  var t = p.stopWatch();
  var messages = pregel.getMsgCollection(executionNumber).count();
  var error = getError(executionNumber);
  var final = global.final;
  if (!error) {
    var t2 = p.stopWatch();
    sendMessages(executionNumber, mapping);
    p.storeWatch("ShiftMessages", t2);
  }
  if (ArangoServerState.role() === "PRIMARY") {
    var conductor = getConductor(executionNumber);
    var body = JSON.stringify({
      server: pregel.getServerName(),
      step: global.step,
      executionNumber: executionNumber,
      messages: messages,
      active: active,
      error: error,
      final : final,
      data : global.data
    });
    var coordOptions = {
      coordTransactionID: ArangoClusterInfo.uniqid()
    };
    ArangoClusterComm.asyncRequest("POST","server:" + conductor, db._name(),
      "/_api/pregel/finishedStep", body, {}, coordOptions);
    var debug = ArangoClusterComm.wait(coordOptions);

  } else {
    p.storeWatch("FinishStep", t);
    pregel.Conductor.finishedStep(executionNumber, pregel.getServerName(), {
      step: global.step,
      messages: messages,
      active: active,
      error: error,
      final : final,
      data : global.data
    });
  }
};

var queueDone = function (executionNumber, global, actives, mapping, err) {
  var t = p.stopWatch();
  if (err && err instanceof ArangoError === false) {
    var error = new ArangoError();
    error.errorNum = ERRORS.ERROR_PREGEL_ALGORITHM_SYNTAX_ERROR.code;
    error.errorMessage = ERRORS.ERROR_PREGEL_ALGORITHM_SYNTAX_ERROR.message + ": " + err;
    err = error;
  }
  var globalCol = pregel.getGlobalCollection(executionNumber);
  if (err && !getError(executionNumber)) {
    globalCol.update(ERR, {error: err});
  }
  var countActive = db._executeTransaction({
    collections: {
      write: [globalCol.name()]
    },
    action: function() {
      var c = globalCol.document(COUNTER);
      var d = globalCol.document(DATA).data;
      var updateGlobals = global.data.length > 0;
      global.data = global.data.concat(d);
      var active = c.active + actives;
      if (c.count + 1 === WORKERS) {
        globalCol.update(COUNTER, {
          count: 0,
          active: 0
        });
        globalCol.update(DATA, {
          data : []
        });
        return active;
      }
      globalCol.update(COUNTER, {
        count: c.count + 1,
        active: active
      });
      if (updateGlobals) {
        globalCol.update(DATA, {
          data : global.data
        });
      }
      return false;
    }
  });
  p.storeWatch("VertexDone", t);
  if (countActive !== false) {
    finishedStep(executionNumber, global, mapping, countActive);
  }
};

var executeStep = function(executionNumber, step, options, globals) {
  id = ArangoServerState.id() || "localhost";
  if (step === 0) {
    setup(executionNumber, options);
  }
  var t = p.stopWatch();
  globals = globals || {};
  globals.final = options.final;
  var i = 0;
  var queue;
  for (i = 0; i < WORKERS; i++) {
    queue = getQueueName(executionNumber, i);
    addTask(queue, step, globals);
  }
  p.storeWatch("AddingAllTasks", t);
};

var cleanUp = function(executionNumber) {
  // queues.delete("P_" + executionNumber); To be done for new queue
  db._drop(pregel.genWorkCollectionName(executionNumber));
  db._drop(pregel.genMsgCollectionName(executionNumber));
  db._drop(pregel.genGlobalCollectionName(executionNumber));
  var i, queue;
  for (i = 0; i < WORKERS; i++) {
    queue = getQueueName(executionNumber, i);
    addCleanUpTask(queue);
  }
};


// -----------------------------------------------------------------------------
// --SECTION--                                                    MODULE EXPORTS
// -----------------------------------------------------------------------------

// Public functions
exports.executeStep = executeStep;
exports.cleanUp = cleanUp;
exports.finishedStep = finishedStep;
exports.queueDone = queueDone;