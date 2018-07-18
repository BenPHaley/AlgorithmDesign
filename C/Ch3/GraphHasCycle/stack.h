#include <stdlib.h>
#include "linkedList.h"

typedef struct stack {
	struct node *top;
	int size;
} Stack;

void pushStack (Stack *s, int value);
int popStack (Stack *s);
void printStack (Stack *s);

