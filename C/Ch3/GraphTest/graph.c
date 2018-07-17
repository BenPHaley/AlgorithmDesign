#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

/*
 Adds an edge to the array. The last parameter "directed" is used to 
 determine if the edge is directed or not. directed = 0 if the graph is undirected.
 Otherwise the graph is directed.
 */
void addEdge (int edges[][N], int from, int to, int directed) {
	//to align the vertex number with 0 indexing scheme
	from--;
	to--;
	if (directed == 0) {
		//undirected graph
		edges[from][to] = 1;
		edges[to][from] = 1;
	}
	else {
		//directed graph
		edges[from][to] = 1;
	}
}

/*
 Removes an edge from the list. The last parameter determine whether the graph
 is directed or undirected. 0 if undirected; otherwise directed.
 */
void removeEdge (int edges[][N], int from, int to, int directed) {
	from--;
	to--;
	if (directed == 0) {
		//undirected graph
		edges[from][to] = 0;
		edges[to][from] = 0;
	}
	else {
		//directed graph
		edges[from][to] = 0;
	}
}

/*
 Takes a filename as input and adds edges to the graph that are specified
 in the file.
 
 File should contain pairs of vertices separated by a comma, inside paranthesis.
 Example:(5,6)
 Each pair should be on a separate line. 
 */
void addEdgesFromFile (char *filename, int edges[][N], int directed) {
	FILE *fp = fopen(filename, "r");
	if (fp == NULL) {
		perror("Error opening file.");
		exit(-1);
	}
	int x, y;
	while (fscanf(fp, "(%d,%d)\n", &x, &y) != EOF) {
		//printf("Retrieved (%d,%d)\n", x, y);
		addEdge(edges, x, y, directed);
	} 

}

/*
 Prints every vertice with a list of their edges. 
 */
void toString (Graph *g) {
	int i = 0;
	int x = 0;

	while (i < N) {
		printf("%d: ", i+1);
		x = 0;
		while (x < N) {
			if (g->edges[i][x] == 1) {
				printf("%d, ", x+1);
			}
			x++;
		}
		printf("\n");
		i++;
	}
}
