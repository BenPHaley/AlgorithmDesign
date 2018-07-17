CC = gcc
CFLAGS = -g -Wall

all: main

main: main.o bfsGraph.o graph.o queue.o
	$(CC) -o main main.o bfsGraph.o graph.o queue.o

main.o: main.c graph.h bfsGraph.h
	$(CC) $(CFLAGS) -c main.c

bfsGraph.o: bfsGraph.c bfsGraph.h queue.h
	$(CC) $(CFLAGS) -c bfsGraph.c

graph.o: graph.c graph.h
	$(CC) $(CFLAGS) -c graph.c

queue.o: queue.c queue.h singleLinkedNode.h
	$(CC) $(CFLAGS) -c queue.c

clean: 
	$(RM) main *.o *~
