#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

/*
 Testing the functionality of my Queue struct. 
 Discovered problem: 
	- I was adding local variable nodes to my Queue and they were being erased
	when the function ended. 
 Solutions: 
	- I allocated memory for the nodes I was going to add to the Queue. This
	also required me to free the memory when popping nodes off the Queue. 
 */
int main () {
	Queue q = {};
	int x = 0;
	while (x < 5) {
		push(&q, x++);
	}
	toString(&q);	
	
	printf("The value poped is %d\n", pop(&q));
	toString (&q);
	push(&q, 10);
	toString (&q);
	return 0;
}
