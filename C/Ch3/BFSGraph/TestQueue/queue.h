#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "singleLinkedNode.h"

typedef struct queue {
	struct singlelinkednode *head;
	struct singlelinkednode *tail;
} Queue;

void push (Queue *q, int value);
int pop (Queue *q);
void toString (Queue *q);
