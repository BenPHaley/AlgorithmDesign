#include <stdio.h>
#include <stdlib.h>
#include "graph.h"


int main () {
	int edges[N][N] = {};
	Graph graph = {edges};
	Graph *g = &graph;

	addEdgesFromFile (g, "smallGraph.txt");
	printfGraph (g);
	
	int *neighbors = getEdges(g, 1);	
	printfNeighbors (neighbors);
	free(neighbors);
	neighbors = NULL;	
	return 0;
}
