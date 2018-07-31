#ifndef DIRECTED_GRAPH
#define DIRECTED_GRAPH

#include "linkedList.h"

typedef struct directedGraph {
	LinkedList **edges;
	int size;
} DirectedGraph;


void addVertex (DirectedGraph *g);
void addDirectedEdge (DirectedGraph *g, int from, int to);
void addMultipleEdges (DirectedGraph *g, int from, int *to, int length);
LinkedList * topologicalOrdering (DirectedGraph *g);

#endif
