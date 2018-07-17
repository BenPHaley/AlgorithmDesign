#include <stdio.h>
#include "graph.h"

int main () {
	Graph graph = {.length = 0};
	Graph *g = &graph;
	
	addVertex(g, 1);
	addVertex(g, 2);
	addEdge (g, 1, 2);
	
	printLinkedList(getEdges(g, 1));
	return 0;
}
