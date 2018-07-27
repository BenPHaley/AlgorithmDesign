#ifndef GRAPHH

#include <stdlib.h>
#include "stack.h"

#define GRAPHH

/*
 Undirected graph created using an adjacency list. No size specified which 
 will allow the graph's vertex cardinality to fluxuate.
 */
typedef struct graph {
	LinkedList **edges;
	int length;
} Graph;

void addVertex (Graph *g, int vertex);
void addEdge (Graph *g, int v1, int v2);
void removeEdge (Graph *g, int v1, int v2);
LinkedList *getEdges (Graph *g, int vertex);
Stack *hasCycle (Graph *g);


#endif
