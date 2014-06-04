<a name="modules"></a>
# Modules
<a name="commonjs_modules"></a>
### CommonJS Modules

Unfortunately, the JavaScript libraries are just in the process of being
standardized. CommonJS has defined some important modules. ArangoDB implements
the following

- "console" is a well known logging facility to all the JavaScript developers.
  ArangoDB implements all of the functions described
  <a href="http://wiki.commonjs.org/wiki/Console">here</a>, with the exceptions
  of `profile` and `count`.

- "fs" provides a file system API for the manipulation of paths, directories, 
  files, links, and the construction of file streams. ArangoDB implements
  most of Filesystem/A functions described
  <a href="http://wiki.commonjs.org/wiki/Filesystem/A">here</a>.

- Modules are implemented according to 
  <a href="http://wiki.commonjs.org/wiki/Modules">Modules/1.1.1</a>

- Packages are implemented according to
  <a href="http://wiki.commonjs.org/wiki/Packages">Packages/1.0</a>

<a name="arangodb_specific_modules"></a>
### ArangoDB Specific Modules

A lot of the modules, however, are ArangoDB specific. These modules
are described in the following chapters.

<a name="node_modules"></a>
### Node Modules

ArangoDB also support some <a href="http://www.nodejs.org/">node</a> modules.

- <a href="http://nodejs.org/api/assert.html">"assert"</a> implements 
  assertion and testing functions.

- <a href="http://nodejs.org/api/buffer.html">"buffer"</a> implements
  a binary data type for JavaScript.

- <a href="http://nodejs.org/api/path.html">"path"</a> implements
  functions dealing with filenames and paths.

- <a href="http://nodejs.org/api/punycode.html">"punycode"</a> implements
  conversion functions for
  <a href="http://en.wikipedia.org/wiki/Punycode">punycode</a> encoding.

- <a href="http://nodejs.org/api/querystring.html">"querystring"</a>
  provides utilities for dealing with query strings.

- <a href="http://nodejs.org/api/stream.html">"stream"</a>
  provides a streaming interface.

- <a href="http://nodejs.org/api/url.html">"url"</a>
  has utilities for URL resolution and parsing.

<a name="node_packages"></a>
### Node Packages

The following <a href="https://npmjs.org/">node packages</a> are preinstalled.

- <a href="http://docs.busterjs.org/en/latest/modules/buster-format/">"buster-format"</a>

- <a href="http://matthewmueller.github.io/cheerio/">"Cheerio.JS"</a>

- <a href="http://coffeescript.org/">"coffee-script"</a> implements a
  coffee-script to JavaScript compiler. ArangoDB supports the `compile` 
  function of the package, but not the `eval` functions.

- <a href="https://github.com/fb55/htmlparser2">"htmlparser2"</a>

- <a href="http://sinonjs.org/">"Sinon.JS"</a>

- <a href="http://underscorejs.org/">"underscore"</a> is a utility-belt library
  for JavaScript that provides a lot of the functional programming support that 
  you would expect in Prototype.js (or Ruby), but without extending any of the
  built-in JavaScript objects.

<a name="require"></a>
### require

´require(path)´

*require* checks if the module or package specified by *path* has already
been loaded.  If not, the content of the file is executed in a new
context. Within the context you can use the global variable `exports` in
order to export variables and functions. This variable is returned by
*require*.

Assume that your module file is `test1.js` and contains

    exports.func1 = function() {
      print("1");
    };

    exports.const1 = 1;

Then you can use @FN{require} to load the file and access the exports.

    unix> ./arangosh
    arangosh> var test1 = require("test1");

    arangosh> test1.const1;
    1

    arangosh> test1.func1();
    1

*require* follows the specification
[Modules/1.1.1](http://wiki.commonjs.org/wiki/Modules/1.1.1).