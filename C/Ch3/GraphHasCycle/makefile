CC = gcc
CFALGS = -g -Wall

all: main

main: main.o graph.o linkedList.o stack.o
	$(CC) -o main main.o graph.o linkedList.o stack.o

main.o: main.c graph.h linkedList.h
	$(CC) $(CFLAGS) -c main.c

graph.o: graph.c graph.h stack.h
	$(CC) $(CFLAGS) -c graph.c

linkedList.o: linkedList.c linkedList.h
	$(CC) $(CFLAGS) -c linkedList.c

stack.o: stack.c stack.h linkedList.h
	$(CC) $(CFLAGS) -c stack.c

clean: 
	$(RM) main *.o *~
