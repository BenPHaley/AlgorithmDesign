CC = gcc
CFLAGS = -g -Wall

#default or all is the name of teh first target entry

all: firstGraph

firstGraph: firstGraph.o graph.o
	$(CC) -o firstGraph firstGraph.o graph.o

firstGraph.o: firstGraph.c graph.h
	$(CC) $(CFLAGS) -c firstGraph.c

graph.o: graph.c graph.h
	$(CC) $(CFLAGS) -c graph.c

clean: 
	  $(RM) firstGraph *.o *~
