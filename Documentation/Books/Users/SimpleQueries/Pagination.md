<a name="pagination"></a>
# Pagination

If, for example, you display the result of a user search, then you are in
general not interested in the completed result set, but only the first 10 or so
documents. Or maybe the next 10 documents for the second page. In this case, you
can the *skip* and *limit* operators. These operators work like LIMIT in
MySQL.

*skip* used together with *limit* can be used to implement pagination.
The @FN{skip} operator skips over the first n documents. So, in order to create
result pages with 10 result documents per page, you can use `skip(n *
10).limit(10)` to access the 10 documents on the n.th page.  This result should
be sorted, so that the pagination works in a predicable way.


`query.limit( number)`

Limits a result to the first number documents. Specifying a limit of 0 returns no documents at all. If you do not need a limit, just do not add the limit operator. The limit must be non-negative.

In general the input to limit should be sorted. Otherwise it will be unclear which documents are used in the result set.

*Examples*

	arango> db.five.all().toArray();
	[ 
	  { "_id" : "five/1798296", "_key" : "1798296", "_rev" : "1798296", "doc" : 3 },
	  { "_id" : "five/1732760", "_key" : "1732760", "_rev" : "1732760", "doc" : 2 },
	  { "_id" : "five/1863832", "_key" : "1863832", "_rev" : "1863832", "doc" : 4 },
	  { "_id" : "five/1667224", "_key" : "1667224", "_rev" : "1667224", "doc" : 1 },
	  { "_id" : "five/1929368", "_key" : "1929368", "_rev" : "1929368", "doc" : 5 } 
	]
	
	arango> db.five.all().limit(2).toArray();
	[ 
	  { "_id" : "five/1798296", "_key" : "1798296", "_rev" : "1798296", "doc" : 3 },
	  { "_id" : "five/1732760", "_key" : "1732760", "_rev" : "1732760", "doc" : 2 } 
	]

*query.skip( number)*

Skips the first number documents. If number is positive, then skip the number of documents. If number is negative, then the total amount N of documents must be known and the results starts at position (N + number).

In general the input to limit should be sorted. Otherwise it will be unclear which documents are used in the result set.

*Examples*

	arango> db.five.all().toArray();
	[ 
	  { "_id" : "five/1798296", "_key" : "1798296", "_rev" : "1798296", "doc" : 3 },
	  { "_id" : "five/1732760", "_key" : "1732760", "_rev" : "1732760", "doc" : 2 },
	  { "_id" : "five/1863832", "_key" : "1863832", "_rev" : "1863832", "doc" : 4 },
	  { "_id" : "five/1667224", "_key" : "1667224", "_rev" : "1667224", "doc" : 1 },
	  { "_id" : "five/1929368", "_key" : "1929368", "_rev" : "1929368", "doc" : 5 } 
	]
	
	arango> db.five.all().skip(3).toArray();
	[
	  { "_id" : "five/1667224", "_key" : "1667224", "_rev" : "1667224", "doc" : 1 },
	  { "_id" : "five/1929368", "_key" : "1929368", "_rev" : "1929368", "doc" : 5 } 
	]


<!--
@anchor SimpleQueryLimit
@copydetails JSF_SimpleQuery_prototype_limit

@CLEARPAGE
@anchor SimpleQuerySkip
@copydetails JSF_SimpleQuery_prototype_skip
-->