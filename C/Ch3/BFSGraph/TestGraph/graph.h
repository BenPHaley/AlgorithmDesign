#include <stdlib.h>

#define N 9

typedef struct graph {
	int edges[N][N];
} Graph;

void addEdge (Graph *g, int from, int to);
void removeEdge (Graph *g, int from, int to);
void addEdgesFromFile (Graph *g, char *filename);
int *getEdges (Graph *g, int vertex);
void printfNeighbors (int *edges);
int hasEdge (Graph *g, int from, int to);
void printfGraph (Graph *g);
