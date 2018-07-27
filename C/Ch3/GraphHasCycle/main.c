#include <stdio.h>
#include "graph.h"
#include "stack.h"

int main () {
	Graph graph = {.length = 0};
	Graph *g = &graph;
	
	addVertex(g, 1);
	addVertex(g, 2);
	addVertex(g, 3);
	addEdge(g, 1, 2);
	addEdge(g, 2, 3);
	addEdge(g, 3, 1);

	printf("Should print the edges for vertex 1\n");	
	printLinkedList(getEdges(g, 1));

	printf("Length of graph: %d\n", g->length);
	Stack *cycle = hasCycle(g);
	
	if (cycle == NULL) {
		printf("The graph does not have a cycle\n");
	}
	else {
		printf("There is a cycle\n");
		printStack(cycle);
	}

	printf("Removing edge from 1 to 2 breaking the cycle\n");
	removeEdge(g, 1, 2);
	
	cycle = hasCycle(g);
	if (cycle == NULL) {
		printf("The graph does not have a cycle\n");		
	}
	else {
		printf("There is a cycle\n");
		printStack(cycle);
	}


	printf("\nCreating stack and then printing it\n");

	Stack stack = {NULL, 0};
	Stack *s = &stack;
	
	pushStack(s, 10);
	pushStack(s, 15);
	pushStack(s, 30);
	pushStack(s, 2);
	printStack(s);	

	return 0;
}
