#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

/*
 Adds an edge to the array.
 */
void addEdge (Graph *g, int from, int to) {
	//to align the vertex number with 0 indexing scheme
	from--;
	to--;
	g->edges[from][to] = 1;
	g->edges[to][from] = 1;
}

/*
 Removes an edge from the graph.
 */
void removeEdge (Graph *g, int from, int to) {
	from--;
	to--;
	g->edges[from][to] = 0;
	g->edges[to][from] = 0;
}

/*
 Takes a filename as input and adds edges to the graph that are specified
 in the file.
 
 File should contain pairs of vertices separated by a comma, inside paranthesis.
 Example:(5,6)
 Each pair should be on a separate line. 
 
 O(m+1) data comparisons
 */
void addEdgesFromFile (Graph *g, char *filename) {
	FILE *fp = fopen(filename, "r");
	if (fp == NULL) {
		perror("Error opening file.");
		exit(-1);
	}
	int x, y;
	while (fscanf(fp, "(%d,%d)\n", &x, &y) != EOF) {
		//printf("Retrieved (%d,%d)\n", x, y);
		addEdge(g, x, y);
	} 

}

/*
 Returns an array with the neighboring vertices from the given vertex. 
 The first index in the array will specify how many edges the vertex has. 
 
 O(N) data comparisons
 */
int *getEdges (Graph *g, int vertex) {
	int *edges = calloc(N+1, sizeof(int));
	int counter = 1;
	int i = 0;
	while (i < N) {
		if (g->edges[vertex-1][i] == 1) {
			edges[0]++;
			edges[counter++] = i+1;
		}
		i++;
	}
	return edges;
}

/*

 */
void printfNeighbors (int *edges) {
	int length = *edges;
	printf("Number of neighbors = %d\n", length);
	edges++;
	if (length > 0) {
		printf("[%d", *edges);
		length--;
		edges++;
	}
	while (length > 0) {
		printf(", %d", *edges);
		length--;
		edges++;
	}
	printf("]\n");
	
}


/*
 Checks if the input graph has an edge connecting the parameter vertices. 
 Returns 1 if there is an edge. Otherwise returns 0.
 */
int hasEdge (Graph *g, int from, int to) {
	from--;
	to--;
	int i = 0;
	while (i < N) {
		if (g->edges[from][to] == 1) {
			return 1;
		}
		i++;
	}
	return 0;
}

/*
 Prints every vertice with a list of their edges. 
 */
void printfGraph (Graph *g) {
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
