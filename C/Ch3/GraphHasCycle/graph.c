#include <stdio.h>
#include "graph.h"


/*
 	After implementing more of the functions and analzing how my data structures 
 are structured, I would change the way I add vertices. I am letting the "user"
 choose a number for the vertex rather than assigning one. 
 	If I, as the programmer, were to assign vertex numbers then I would be able
 to access the vertices like an array and index them. Currently I have to search for
 the vertex in the list every time. 

	Another solution to the problem is to have a hash table that maps the vertex
 number to the memory location where its LinkedList of edges are. This would take up 
 more memory than the previous solution but would allow the user to specify vertex
 numbers.  
 */


/*
 Adds a vertex to the graph by adding a new linked list to the graph. The head
 node of the linked list will have the number of the node.

 **Currently does not check if vertex is already in the graph**

 */
void addVertex (Graph *g, int vertex) {
	//allocate space for linkedlist pointer
	(g->edges) = realloc(g->edges, sizeof(g->edges)+sizeof(LinkedList*));
	//allocate space for linkedlist
	((g->edges)[g->length]) = calloc(1, sizeof(LinkedList));
	//allocate space for node in linked list
	((g->edges)[g->length])->head = calloc(1, sizeof(struct node));
	//assign value to head node of linked list
	((g->edges)[g->length])->head->value = vertex; 
	g->length++;
}

/* 
 Adds an edge between v1 and v2. If v1 and/or v2 doesn't exist the vertex will
 be added to the graph.
 */
void addEdge (Graph *g, int v1, int v2) {
	if (v1 == v2) {
		return;
	}
	//will be updated later if vertex is found
	int found1 = 0, found2 = 0;
	LinkedList **edges = g->edges;
	int length = g->length;

	while (length > 0) {
		if (v1 == (edges[length-1]->head)->value) {
			push((edges[length-1]), v2);
			found1 = 1;
		}
		else if (v2 == (edges[length-1]->head)->value) {
			push((edges[length-1]), v1);
			found2 = 1;
		}
		length--;
	}
	//checks if vertices were found when querying graph
	//adds vertices to graph if not found and adds the edge
	if (!found1) {
		addVertex(g, v1);
		push(((g->edges)[length-1]), v2); 
	}
	if (!found2) {
		addVertex(g, v2);
		push(((g->edges)[length-1]), v1);
	}

}

/*
 Finds the list of edges for the vertex specified and returns a pointer to the list. 
 The first node in the linked list is the number of the vertex. 
 */
LinkedList *getEdges (Graph *g, int vertex) {
	int i = 0;
	while (i < g->length) {
		if (g->edges[i]->head->value == vertex) {
			return g->edges[i];
		}
		i++;
	}
	return NULL;
}


/*
 Searches the graph for a cycle. If the graph has a cycle the function returns a cycle
 in the graph. Otherwise return NULL. 
 This is done by performing a depth first search and comparing to the list of already
 processed vertices. 
 */
LinkedList *hasCycle (Graph *g) {
	int *seen = calloc(g->length, sizeof(int));
	//will be used to recover cycle if found
	int *pastPath = calloc(1, sizeof(int));

}
