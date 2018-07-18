#include "stack.h"


/*
 Adds a node to the top of the stack with the value of the parameter. 
 Allocates memory for the new node and increments the size of the stack. 
 */
void pushStack (Stack *s, int value) {
	//allocate memory for new Node
	Node *addition = malloc(sizeof(Node));
	addition->value = value;
	//connect it to the top of the stack
	addition->next = s->top;
	//set the top of the stack to the newly added Node
	s->top = addition;
	s->size++;
}


/*
 Removes the top node from the stack and returns the value it stored. 
 Decrements the size of the stack. If there are no nodes in the stack the
 function returns -1. 
 */
int popStack (Stack *s) {
	if (s->size == 0) {
		return -1;
	}

	Node *top = s->top;
	int value = top->value;
	s->top = (s->top)->next;
	s->size--;	
	
	top->next = NULL;
	free(top);
	return value;

}


/*
 Prints the values on the stack from top to bottom. 
 */
void printStack (Stack *s) {
	Node *curr = s->top;
	int size = s->size;
	
	printf("Top: ");
	if (size > 0) {
		printf("%d", curr->value);
		curr = curr->next;
		size--;
	}
	while (size > 0) {
		printf(", %d", curr->value);
		curr = curr->next; 
		size--;
	}
	printf("\n");
}
