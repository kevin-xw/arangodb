<a name="edges,_identifiers,_handles"></a>
# Edges, Identifiers, Handles

This is an introduction to ArangoDB's interface for edges and how to handle
edges from the JavaScript shell *arangosh*. For other languages see the
corresponding language API.

Edges in ArangoDB are special documents. In addition to the internal 
attributes _key, _id and _rev, they have two attributes _from and _to, 
which contain document handles, namely the start-point and the end-point of the edge.
The values of _from and _to are immutable once saved.

Edge collections are special collections that store edge documents. Edge documents 
are connection documents that reference other documents. The type of a collection 
must be specified when a collection is created and cannot be changed afterwards.

<a name="working_with_edges"></a>
## Working with Edges

`edge-collection.save( from, to, document)`

Saves a new edge and returns the document-handle. from and to must be documents or document references.

`edge-collection.save( from, to, document, waitForSync)`

The optional waitForSync parameter can be used to force synchronisation of the document creation operation to disk even in case that the waitForSync flag had been disabled for the entire collection. Thus, the waitForSync parameter can be used to force synchronisation of just specific operations. To use this, set the waitForSync parameter to true. If the waitForSync parameter is not specified or set to false, then the collection's default waitForSync behavior is applied. The waitForSync parameter cannot be used to disable synchronisation for collections that have a default waitForSync value of true.

*Examples*

	arango> v1 = db.vertex.save({ name : "vertex 1" });
	{ "_id" : "vertex/1528086", "_key" : "1528086", "_rev" : "1528086" }
	arango> v2 = db.vertex.save({ name : "vertex 2" });
	{ "_id" : "vertex/1593622", "_key" : "1593622", "_rev" : "1593622" }
	arango> e1 = db.relation.save(v1, v2, { label : "knows" });
	{ "_id" : "relation/3100950", "_key" : "3100950", "_rev" : "3100950" }
	arango> db._document(e1);
	{ "_id" : "relation/3100950", "_key" : "3100950", "_rev" : "3100950", "_from" : "vertex/1528086", "_to" : "vertex/1593622", "label" : "knows" }

`edge-collection.edges( vertex)`

The edges operator finds all edges starting from (outbound) or ending in (inbound) vertex.

`edge-collection.edges( vertices)`

The edges operator finds all edges starting from (outbound) or ending in (inbound) a document from vertices, which must a list of documents or document handles.

*Examples*
	
	arango> db.relation.edges("vertex/1593622");
	[
	  {
	    "_id" : "relation/3100950", 
	    "_key" : "3100950", 
	    "_rev" : "3100950", 
	    "_from" : "vertex/1528086",
	    "_to" : "vertex/1593622", 
	    "label" : "knows"
	  }
	]

`edge-collection.inEdges( vertex)`

The edges operator finds all edges ending in (inbound) vertex.

`edge-collection.inEdges( vertices)`

The edges operator finds all edges ending in (inbound) a document from vertices, which must a list of documents or document handles.

*Examples*

	arango> db.relation.inEdges("vertex/1528086");
	[ ]
	arango> db.relation.inEdges("vertex/1593622");
	[
	  {
	    "_id" : "inEdges/3100950",
	    "_key" : "3100950",
	    "_rev" : "3100950", 
	    "_from" : "vertex/1528086",
	    "_to" : "vertex/1593622",
	    "label" : "knows"
	  }
	]

`edge-collection.outEdges( vertex)`

The edges operator finds all edges starting from (outbound) vertices.

`edge-collection.outEdges( vertices)`

The edges operator finds all edges starting from (outbound) a document from vertices, which must a list of documents or document handles.

*Examples*

	arango> db.relation.outEdges("vertex/1528086");
	[
	  {
	    "_id" : "relation/3100950",
	    "_key" : "3100950",
	    "_rev" : "3100950",
	    "_from" : "vertex/1528086",
	    "_to" : "vertex/1593622",
	    "label" : "knows"
	  }
	]
	arango> db.relation.outEdges("vertex/1593622");
	[ ]
	

<!--
@anchor HandlingEdgesCreate
@copydetails SaveEdgeCol

@CLEARPAGE
@anchor HandlingEdgesEdges
@copydetails JS_EdgesQuery

@CLEARPAGE
@anchor HandlingEdgesInEdges
@copydetails JS_InEdgesQuery

@CLEARPAGE
@anchor HandlingEdgesOutEdges
@copydetails JS_OutEdgesQuery

-->