## Breadth First Search Graph

### Overview 
---
Created a fixed size graph using an adjacency matrix. In addition to the graph, 
I implemented a queue using a singly linked list that adds nodes to the end 
and removes them from the head. The bfs function is the main focus of this 
directory. 


### Files
---

*graph.c*

Has general functions such as: addEdge(), removeEdge(), getEdges(), and 
printfGraph(). One additional function I added was addEdgesFromFile(). This 
function takes in a graph pointer and a sring representing a filename. The 
funciton opens the given file and parses it by adding an edge between every 
pair of nodes in the input file. Creating graphs to test my functions was less 
work this way and probably saved me a couple hours in the end. 


*queue.c*

Implemented with a linked list, which has pointers to the head and tail node. 
Nodes are added to the back of the list and removed from the front. This file 
contains 3 functions: push(), pop(), and printfQueue(). These functions are 
self explanitory and have descriptive comments in the code. In the future, I 
will name functions more specifically because push and pop can apply to many 
data types. 


*singleLinkedNode.h*

Contains the Node struct which is used to create the queue. 


*bfsGraph.c*

Takes in a graph pointer and completes a breadth first search beginning at 
vertex 0. Returns an array with the order the vertices were processed. To do 
this I added the first vertex to the queue. Then I added all of its neighboring
vertices, that haven't been in the queue yet, to the queue. I added the current 
vertex to the return array and then poped the next vertex off the queue. I 
looped through this process until the queue was empty. 

This will only work on graphs that are connected.


*smallGraph.txt and largeGraph.txt*

These text files contain pairs of vertices in which to add edges between to 
create a graph. 


*main.c*

Contains the main() function which will be run when compiled. Contains a 
couple small tests of the bfs function.



