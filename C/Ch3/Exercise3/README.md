## Directed Graph is DAG or Return Cycle

#### Exercise Description

The algorithm described in Section 3.6 for computing a topological order-
ing of a DAG repeatediy finds a node with no incoming edges and deletes
it. This will eventually produce a topological ordering, provided that the
 ̄ input graph really is a DAG.
But suppose that we’re given an arbitrary graph that may or may not
be a DAG. Extend the topological ordering algorithm so that, given an
input directed graph G, it outputs one of two things: (a) a topological
ordering, thus establishing that a is a DAG; or (b) a cycle in G, thus
establishing that a is not a DAG. The nmning time of your algorithm
should be O(m + n) for a directed graph with n nodes and m edges.



#### Proposed Solution

First I will create a directed graph using an adjacency list. I will implement 
the adjacency list with a linked list. 

To begin the algorithm, I will do one pass through the vertices and record the 
number of incoming edges. From that list, I will look for a vertex without any 
incoming edges. I will then remove this vertex and adjust the record of 
incoming edges accordingly. I will continue this until one of two cases 
occurs:

1. All vertices have been removed from the graph. Which means the graph is a 
Directed Acyclic Graph (DAG) and I should return the ordering I saved. 
2. All the vertics left have at least one incoming edge. This graph has a cycle 
and the cycle should be returned. The cylce is contained in the remaining 
elements of the graph. 


