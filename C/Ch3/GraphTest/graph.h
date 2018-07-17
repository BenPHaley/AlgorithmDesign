#define N 10
#define DIRECTED 1
#define UNDIRECTED 0

typedef struct graph {
	int vertices[N];
	int edges[N][N];
} Graph;

void addEdge (int edges[][N], int from, int to, int directed);
void removeEdge (int edges[][N], int from, int to, int directed);
void addEdgesFromFile (char *filename, int edges[][N], int directed);

int *getEdges (Graph *g, int vertex);
int hasEdge (Graph *g, int from, int to, int directed);

void toString (Graph *g);
