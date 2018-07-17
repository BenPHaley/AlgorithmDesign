#include "queue.h"

/*
 Adds a node to the parameter queue with the integer 'value'.
 Need to allocate memory for local variables that will have longer lives
 than the function itself. 
 */
void push (Queue *q, int value) {
	//SingleLinkedNode temp = {value, NULL};
        SingleLinkedNode *tmp = malloc(sizeof(SingleLinkedNode));
	tmp->value = value;
	tmp->next = NULL;
        if (q->head == NULL) {
                q->head = tmp;
                q->tail = tmp;
        }
        else {
                (q->tail)->next = tmp;
                q->tail = (q->tail)->next;
        }
}


/*
 Removes the first node in the queue and returns the value that it stores.
 If there are no nodes in the queue, the function returns -1.
 */
int pop (Queue *q) {
        if (q->head == NULL) {
                return -1;
        }
	int value = 0;
        SingleLinkedNode *tmp = q->head;
        //removing node from front of queue
        q->head = (q->head)->next;
	
	value = tmp->value;
	//free memory and set pointer to NULL
	free(tmp);
	tmp = NULL;
        return value;
}

/*
 Prints every element in the queue, head to tail. 
 */
void printfQueue (Queue *q) {
	SingleLinkedNode *curr = q->head;
	printf("Head: %d", curr->value);
	do {
		curr = curr->next;
		printf("<-%d", curr->value);
	} while (curr != q->tail);
	printf("\n");
}
