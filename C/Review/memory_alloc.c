#include <stdio.h>
#include <stdlib.h>

int * add (int *x, int *y);


int main () {
	int *x = malloc(sizeof(int));				//allocates space but no initialization
	int *y = calloc(1, sizeof(int));			//allocates space in memory and initializes location data to 0
	printf("Used malloc to allocate the size of an integer\n");
	free(x);						//
	x = NULL;						//becomes a dangling pointer if you don't set the variable to NULL
	free(y);
	y = NULL;
	//cannot double free a space
	//you can free NULL

	//return_type (*var_name) (param1, ..., paramN);
	int * (*func) (int, int);				//function pointer
	return 0;
}

int * add (int *x, int *y) {
	int *z = malloc(sizeof(int));
	*z = *x + *y;
	return z;	
}
