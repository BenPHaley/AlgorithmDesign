/*
 This array.c file is meant to practice the basics of c arrays. 
 There are many ways to implement arrays and I will explore a few of them here.

  Lessons Learned:
	- don't use pointers as arrays. First define an array and then iterate over it using a ptr
	- I need to learn how to link header files with .c files and write a makefile

 */
#include <stdlib.h>
#inlcude <array.h>
#if !defined(IO)
	#include <stdio.h>
#endif

#define LENGTH 10

int main (int argc, char *argv[]) {
	int array[LENGTH] = {0};
	int *ptr = array;
	
	int i = 0;
	for (i = 0; i < LENGTH; i++) {
		array[i] = i * i * 3 + 1;
	}	

	printArray (ptr, LENGTH);	
	return 0;
}
