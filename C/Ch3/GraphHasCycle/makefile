CC = gcc
CFALGS = -g -Wall

all: main

main: main.o graph.o linkedList.o
	$(CC) -o main main.o graph.o linkedList.o

main.o: main.c graph.h linkedList.h
	$(CC) $(CFLAGS) -c main.c

graph.o: graph.c graph.h linkedList.h
	$(CC) $(CFLAGS) -c graph.c

linkedList.o: linkedList.c linkedList.h
	$(CC) $(CFLAGS) -c linkedList.c

clean: 
	$(RM) main *.o *~
