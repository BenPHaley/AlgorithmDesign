## Chapter 3: Exercise 2

#### Problem

Give and algorithm to detext whether a given undirected graph contains a 
cylce. If teh grpah contains a cycle, then your algorithms should output 
one. (It should not output all cycles in the graph, just one of them). The 
running time of your algorithm should be `O(m+n)` for a graph with n 
nodes and m edges.

#### Solution

Do a depth-first search on the given graph. Place vertices you visit along the 
way into a list. This list will contain the vertices in the direct path from 
the starting vertex to the current vertex. This list will be used to compare 
neighbors of the current vertex to determine if the current path is a loop.

