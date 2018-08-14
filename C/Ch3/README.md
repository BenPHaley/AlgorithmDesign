## Chapter 3 (The Beginning)


### GraphTest
---

This was the first graph I coded in C. 

**I learned:**
- a lot about how I can and cannot use pointers and arrays. Attempting to 
create this graph led me to code *ArrayStuff* and some other practice programs


### ArrayStuff
---

Created an array and traversed through it. Printed out the array using a 
function and passing in the array as a pointer. 

Next, I created a 2D array and traversed through it using row and column 
indices. 

**I learned:** 

- not to put code in header files. Header files are meant for function
prototypes and macros. 
- that the rows of 2D arrays are stored in adjacent memory locations. This 
allows you to iterate over a 2D array with a single pointer. 

### BFSGraph
---

First created graph, queue, and node structs. I then wrote the function
`int *bfs (Graph *g);`
which returns an array of the vertices in the order they were visited. 

**I learned:**

- that coding a staticly vertexed graph is easier than a dynamicly vertexed 
graph
- to read files using sscanf and use the main function parameters argc and 
argv

### Exercise 2
---

**_GraphHasCycle_**

Give and algorithm to detext whether a given undirected graph contains 
a cylce. If teh grpah contains a cycle, then your algorithms should output 
one. (It should not output all cycles in the graph, just one of them). The 
running time of your algorithm should be `O(m+n)` for a graph with n 
nodes and m edges.


**I learned:**
- to allocate memory for a data structure to allow for a dynamic structure


### Exercise 3
---

The algorithm described in Section 3.6 for computing a topological order-
ing of a DAG repeatediy finds a node with no incoming edges and deletes
it. This will eventually produce a topological ordering, provided that the 
input graph really is a DAG.


But suppose that we’re given an arbitrary graph that may or may not
be a DAG. Extend the topological ordering algorithm so that, given an
input directed graph G, it outputs one of two things: (a) a topological
ordering, thus establishing that a is a DAG; or (b) a cycle in G, thus
establishing that a is not a DAG. The nmning time of your algorithm
should be O(m + n) for a directed graph with n nodes and m edges.




### Exercise 5
---

A binary tree is a rooted tree in which each node has at most two children.
Show by induction that in any binary tree the number of nodes with two
children is exactly one less than the number of leaves.

