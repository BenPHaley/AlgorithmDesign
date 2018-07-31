CC = gcc
CFLAGS = -g -Wall


all: main

main: main.o directedGraph.o linkedList.o
	$(CC) main.o directedGraph.o linkedList.o -o main

main.o: main.c directedGraph.h
	$(CC) $(CFLAGS) -c main.c -o main.o

directedGraph.o: directedGraph.c directedGraph.h linkedList.h
	$(CC) $(CFLAGS) -c directedGraph.c -o directedGraph.o

linkedList.o: linkedList.c linkedList.h
	$(CC) $(CFLAGS) -c linkedList.c -o linkedList.o

clean:
	$(RM) *.o main

