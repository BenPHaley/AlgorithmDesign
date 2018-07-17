#include <stdio.h>

//gcc -E program.c -> will show the program after preprocessing
#define MAX 5					//all uppercase lettering, replaces during preprocessing

typedef double Dollars;				//should always be in CamelCase


struct pixel {
	int x, y;
	char color;
};

typedef struct node {				//typedef allows the type of this 'struct node' to be 'Node'
	int value;
	struct node *next;
} Node;

//Unions allow you to use the same memory location for multiple data types
//can only use one of the variables at a time though
typedef union data {
	int x;
	float y;
	char str[10];
} Data;

int main () {
	struct pixel mypixel;
	Node second = {5, NULL};
	Node head = {10, &second};
	
	Data variable;
	//will be the size of the largest data type in the union
	printf("Size of union is %lu\n", sizeof(variable));
	
	return 0;
}
