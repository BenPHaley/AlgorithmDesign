#include <stdio.h>
#define IO

/**
 Prints the array to stdout.
 **/
void printIntArray (int *ptr, int length) {
        printf("[");
        int i = 0;
        for (i = 0; i < length-1; i++) {
                printf("%d, ", *ptr);
                ptr++;
        }
        printf("%d]\n", *ptr);
}

/**
 Returns the index of the int value in the array, if the array contains it. Otherwise
 returns 0.
 **/
int contains (int *ptr, int length, int value) {
	int i = 0;
	while (i < length) {
		if (*ptr == value) {
			return i;
		}
		ptr++;
	}
	return 0;
}


