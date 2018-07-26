#ifndef LINKEDLISTH

#include <stdlib.h>
#include <stdio.h>

#define LINKEDLISTH

typedef struct node {
	int value;
	struct node *next;
} Node;

typedef struct linkedlist {
	struct node *head;
} LinkedList;

void push (LinkedList *list, int value);
void removeNode (LinkedList *list, int value);
void trim (LinkedList *list, int value);
void printLinkedList (LinkedList *list);

#endif
