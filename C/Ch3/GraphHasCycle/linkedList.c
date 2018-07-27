#include <stdlib.h>
#include "linkedList.h"

/* 
 Adds a node to the end of the linked list with the parameter value.
 */
void push (LinkedList *list, int value) {
	Node *curr = list->head;
	Node *addition = calloc(1, sizeof(Node));
	addition->value = value;
	addition->next = NULL;
	
	// When there are no elements in the linked list
	if (curr == NULL) {
		curr = addition;
		return;
	}

	// Finds the end of the linked list
	while (curr->next != NULL) {
		curr = curr->next;
	}
	// Adds node to the end of the linked list
	curr->next = addition;
}

/*
 Removes the node from the linked list with the parameter value. If the 
 linked list does not contain the value the function does nothing.
 */
void removeNode (LinkedList *list, int value) {
	Node *curr = list->head;
	Node *prev = NULL;
	while (curr != NULL) {
		if (curr->value == value) {
			if (prev == NULL) {
				//removing the head node
				list->head = curr->next;
			}
			else {
				prev->next = curr->next;
			}
			free(curr);
			curr = NULL;
			return;
		}
		prev = curr;
		curr = curr->next;
	}
}

/*
 Trims the linked list after the node with the parameter value. Making the node
 with value the last node in the linked list.  
 */
void trim (LinkedList *list, int value) {
	Node *curr = list->head;
	if (curr == NULL) {
		return;
	}

	while (curr->value != value) {
		curr = curr->next;
	}
	Node *head = curr->next, *next = NULL;;
	curr->next = NULL;

	while (head != NULL) {
		next = head->next;
		free(head);
		head = NULL;
		head = next;
	}
}

void printLinkedList (LinkedList *list) {
	Node *curr = list->head;
	if (curr != NULL) {
		printf("%d: ", curr->value);
		curr = curr->next;
	}
	
	while (curr != NULL) {
		printf("%d, ", curr->value);
		curr = curr->next;
	}
	printf("\n");	
}
