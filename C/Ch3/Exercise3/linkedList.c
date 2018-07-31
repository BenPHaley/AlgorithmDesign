#include "linkedList.h"


/* 
 Adds a node to the end of the LinkedList with the parameter value.
 Allocates memory for the new node and if the linkeList is empty make the 
 new node the head. 
 */
void addNode (LinkedList *l, int value) {
	Node *tmp = calloc(1, sizeof(Node));
	tmp->value = value;
	tmp->next = NULL;

	if (l->head == NULL) {
		l->head = tmp;		
	}
	else {
		Node *curr = l->head;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = tmp;
	}
}


/* 
 Removes the head from the linked list and returns its value. If there are no 
 nodes in the linked list then the fuction returns -1. Deallocates space for 
 the removed node. 
 */
int removeNode (LinkedList *l) {
	if (l == NULL) {
		return -1;
	}
	
	Node *first = (l->head);
	int tmp = first->value;
	l->head = l->head->next;
	first->next = NULL;
	free(first);
	return tmp;
	
}


/* 
 Counts the number of nodes in the linked list and returns the integer.
 */
int sizeLinkedList (LinkedList *l) {
	Node *curr = l->head;
	int num = 0;
	while (curr != NULL) {
		num++;
		curr = curr->next;
	}
	return num;
}


/*
 Will print the linked list, head to tail, to stdout. 
 */
void printLinkedList (LinkedList *l) {
	Node *curr = l->head;
	if (curr != NULL) {
		printf("[%d", curr->value);
		curr = curr->next;
	}
	while (curr != NULL) {
		printf(", %d", curr->value);
		curr = curr->next;
	}
	printf("]\n");
}
