CC = gcc
CFLAGS = -g -Wall

all: main

main: main.o queue.o
	$(CC) -o main main.o queue.o

main.o: main.c queue.h
	$(CC) $(CFLAGS) -c main.c 

queue.o: queue.c queue.h singleLinkedNode.h
	$(CC) $(CFLAGS) -c queue.c

clean: 
	$(RM) main *.o *~

