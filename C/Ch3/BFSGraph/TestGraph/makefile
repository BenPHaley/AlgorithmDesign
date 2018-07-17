CC = gcc
CFLAGS = -g -Wall

all: main

main: main.o graph.o
	$(CC) -o main main.o graph.o

main.o: main.c graph.h
	$(CC) $(CFLAGS) -c main.c

graph.o: graph.c graph.h
	$(CC) $(CFLAGS) -c graph.c

clean:
	$(RM) main *.o *~
