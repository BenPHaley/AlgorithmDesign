## Chapter 3 (The Beginning)

#### ArrayStuff

Created an array and traversed through it. Printed out the array using a 
function and passing in the array as a pointer. 

Next, I created a 2D array and traversed through it using row and column 
indices. 

**I learned:** 

- not to put code in header files. Header files are meant for function
prototypes and macros. 
- that the rows of 2D arrays are stored in adjacent memory locations. This 
allows you to iterate over a 2D array with a single pointer. 

#### BFSGraph

First created graph, queue, and node structs. I then wrote the function
'''int *bfs (Graph *g);'''
which returns an array of the vertices in the order they were visited. 

**I learned:**

- that coding a staticly vertexed graph is easier than a dynamicly vertexed 
graph
- to read files using sscanf and use the main function parameters argc and 
argv

#### GraphHasCycle

**Chapter 3 Exercise 2**

Give and algorithm to detext whether a given undirected graph contains 
a cylce. If teh grpah contains a cycle, then your algorithms should output 
one. (It should not output all cycles in the graph, just one of them). The 
running time of your algorithm should be '''O(m+n)''' for a graph with n 
nodes and m edges.

**Solution**

Created a graph using an array of linked list pointers. Still in the process
In the progress of finishing...

**I learned:**
- to allocate memory for a data structure to allow for a dynamic structure

#### GraphTest

This was the first graph I coded in C. 

**I learned:**
- a lot about how I can and cannot use pointers and arrays. Attempting to 
create this graph led me to code *ArrayStuff* and some other practice programs

