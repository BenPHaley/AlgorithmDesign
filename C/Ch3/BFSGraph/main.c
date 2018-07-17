#include <stdio.h>
#include "bfsGraph.h"

void printfArray (int *array, int length);

int main () {	
	int edges[N][N] = {};
	Graph *g = {edges};
	
	//create graph from input file, has 10 vertices
	addEdgesFromFile (g, "largeGraph.txt");
	printf("Printing graph:\n");
	printfGraph (g);
	
//printf("Testing getEdges\n");
	//printfNeighbors(getEdges(g, 1));
	
	int *list = bfs(g);
	printf("Breadth First Search ordering of vertices:\n");
	printfArray (list, N);
	
	return 0;
}


void printfArray (int *array, int length) {
	printf("[%d", *array);
	array++;
	length--;
	while (length != 0) {
		printf(", %d", *array);
		array++;
		length--;
	}
	printf("]\n");
}
