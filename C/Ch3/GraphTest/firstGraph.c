#include <stdio.h>
#include "graph.h"

#define MAX_LENGTH 64

int main () {
	int vertices[N] = {1,2,3,4,5};
	int edges[N][N] = {};
	
	Graph *g = {vertices, edges};
	printf("Successfully made a graph in C!\n");
	printf("Input a valid file name to add edges to the graph: ");
	char filename[MAX_LENGTH];
	scanf("%s.", filename);
	addEdgesFromFile(filename, g->edges, UNDIRECTED);
	printf("Before removing:\n");
	toString(g);	
	removeEdge(g->edges, 6, 10, UNDIRECTED);
	printf("After removing edge from 6->10:\n");
	toString(g);
	return 0;
}
