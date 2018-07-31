#include <stdlib.h>
#include <stdio.h>
#include "directedGraph.h"


int main () {
	DirectedGraph graph = {NULL, 0};	
	DirectedGraph *g = &graph;

	printf("About to add 10 vertices to the graph\n");
	int num = 10;
	while (num) {
		addVertex(g);
		num--;
	}
	
	printf("Adding one edge to the graph\n");
	addDirectedEdge(g, 0, 1);

	printf("Adding many edges to create DAG\n");
	int array[2] = {2, 3};
	addMultipleEdges(g, 1, array, 2);
	
	array[0] = 4;
	addMultipleEdges(g, 2, array, 2);
	
	addDirectedEdge(g, 3, 4);
	
	addDirectedEdge(g, 4, 5);

	array[0] = 6;
	array[1] = 7;
	addMultipleEdges(g, 5, array, 2);
	
	addDirectedEdge(g, 7, 8);
	addDirectedEdge(g, 8, 9);

	printf("Calling topologicalOrdering()\n");
	LinkedList *output = topologicalOrdering(g);	
	printf("Finished topologicalOrdering()\n");
	
	if (output != NULL) {
		printLinkedList(output);
	}
	else {
		printf("There is a cylce in the graph.\n");
	}

	printf("Adding an edge to make a cycle\n");
	addDirectedEdge(g, 5, 2);
	
	output = topologicalOrdering(g);
	
	if (output != NULL) {
		printLinkedList(output);
	}
	else {
		printf("Correct! This graph has a cycle.\n");
	}
	// Adds an eleventh vertex to the graph at index 10
	//addDirectedEdge(g, 0, 20);
	//printf("Size of graph now: %d\n", g->size);

	return 0;
}
