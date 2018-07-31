#ifndef LINKED_LIST
#define LINKED_LIST

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int value;
	struct node *next;
} Node;

typedef struct linkedList {
	Node *head;
} LinkedList;


void addNode (LinkedList *l, int value);
int removeNode (LinkedList *l);
int sizeLinkedList (LinkedList *l);
void printLinkedList (LinkedList *l);

#endif
