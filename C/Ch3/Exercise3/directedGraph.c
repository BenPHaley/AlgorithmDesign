#include "directedGraph.h"


/* 
 Adds a vertex to the graph. Allocates memory for a linked list at the end 
 of the graph's edges array. 
 */
void addVertex (DirectedGraph *g) {
	LinkedList *tmp = calloc(1, sizeof(LinkedList));
		
	if (g->size == 0) {
		g->edges = calloc(1, sizeof(LinkedList*));
		g->edges[0] = calloc(1, sizeof(LinkedList));
		g->edges[0] = tmp;
	}
	else {	
		g->edges = realloc(g->edges, (g->size + 1) * sizeof(LinkedList*));
		g->edges[g->size] = tmp;
	}
	g->size++;
}



/* 
 Adds the paramter "to" to the adjacency list of the vertex "from". This
 will add a directed edge starting at "from" and going to "to".

 From must be a valid vertex in the graph. However "to" can be above the 
 highest vertex. If "to" is greater than the highest vertex, a new vertex will 
 be added to the graph with the index of g->size, regardless of how large "to"
 is. 
 */
void addDirectedEdge (DirectedGraph *g, int from, int to) {
	if (to >= g->size) {
		to = g->size;
		addVertex(g);
	}
	
	addNode(g->edges[from], to);
}


/* 
 Adds edges starting at "from" going to every vertex in "to" array.
 */
void addMultipleEdges (DirectedGraph *g, int from, int *to, int length) {
	while (length != 0) {
		addDirectedEdge(g, from, to[(--length)]);
	}
}

/*

 */
LinkedList * topologicalOrdering (DirectedGraph *g) {
	LinkedList *output = calloc(1, sizeof(LinkedList));
	int *incomingEdges = calloc(g->size, sizeof(int));

	// Go through and count number of incoming edges for each vertex
	int num = 0;
	Node *curr = NULL;
	while (num < g->size) {
		curr = g->edges[num]->head;
		while (curr != NULL) {
			incomingEdges[curr->value]++;
			curr = curr->next;
		}
		num++;
	}	

	// Find first element that has no incoming edges
	num = 0;
	int vertexNoIncoming = -1;
	while (vertexNoIncoming == -1 && num < g->size) {
		if (incomingEdges[num] == 0) {
			vertexNoIncoming = num;
		}
		num++;
	}

	// Remove element with no incoming edges and adjust
	// array of incoming edges accordingly. Find new element with 
	// no incoming edges and repeat. If none break.  
	
	while (vertexNoIncoming != -1) {
		// Effectively removing the vertex from the graph
		addNode(output, vertexNoIncoming);
		incomingEdges[vertexNoIncoming] = -1;

		curr = g->edges[vertexNoIncoming]->head;
		// Reset vertexNoIncoming back to -1
		vertexNoIncoming = -1;
		while (curr != NULL) {
			// Decrements incomingEdges for vertex
			// Checks if vertex will have 0 incoming edges
			// after removing this one
			if (incomingEdges[curr->value]-- == 1) {
				vertexNoIncoming = curr->value;
			}
			
			curr = curr->next;
		}
		
		if (vertexNoIncoming == -1) {
			// Must search for a vertex with no incoming edges
			// in the set of vertices left
			num = 0;
			while (vertexNoIncoming == -1 && num < g->size) {
				if (incomingEdges[num] == 0) {
					vertexNoIncoming = num;
				}
				num++;
			}
			
			if (vertexNoIncoming == -1) {
				// Break out of loop because the graph has 
				// a cycle in it or all the vertices have been 
				// processed
				break;
			}
		}
	}
	
	// Out of while loop. Now need to check if all vertices have been 
	// removed from the graph, signifying the graph is a DAG.
	num = sizeLinkedList(output);
	if (num == g->size) {
		return output;
	}
	else {
		// Find cycle in remain graph
		return NULL;	
	}

}
