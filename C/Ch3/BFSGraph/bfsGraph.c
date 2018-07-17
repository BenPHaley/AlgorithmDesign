#include "bfsGraph.h"
#include "queue.h"

/*
 Runs a Breadth-First Search on the parameter graph. Returns a list of the vertices
 in the order they were visited. 
 */
int *bfs (Graph *g) {
	static int order[N] = {};
	int seen[N] = {};
	int next = 0;
	int currVertex = -1;
	int *currEdges;
	int numEdges = 0;

	Queue queue = {};
	Queue *q = &queue;
	
	//always start at the first vertex
	currVertex = 1;
	seen[currVertex-1] = 1;
	while (currVertex != -1) {
		//printf("currVertex = %d\n", currVertex);
		order[next++] = currVertex;
		//retrieves all the neighbors of the current vertex
		currEdges = getEdges(g, currVertex);
		//first array location is the number of neighboring vertices
		numEdges = *currEdges;
		//printf("Num Edges: %d\n", numEdges);
		currEdges++;
		//loops through all the neighboring edges
		while (numEdges != 0) {
			//checks if vertex has already been visited
			if (seen[(*currEdges)-1] == 0) {
				//printf("Add to queue: %d\n", *currEdges);
				//add vertex to the back of the queue
				push(q, *currEdges);
				seen[(*currEdges)-1] = 1;
			}
			currEdges++;
			numEdges--;
		}
		currVertex = pop(q);
		//printf("\n");
	}
	return order;
}
