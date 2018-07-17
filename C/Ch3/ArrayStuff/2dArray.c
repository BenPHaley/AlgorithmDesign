#include <stdlib.h>
#include <stdio.h>

#define LENGTH 10

void printIntArray(int *ptr, int length);

int main () {
	int array[LENGTH][LENGTH];
	
	int row = 0;
	while (row < LENGTH) {
		int col = 0;
		while (col < LENGTH) {
			array[row][col] = (row+1) * (col+1);
			col++;
		}
		row++;
	}
	
	row = 0;
	while (row < LENGTH) {
		printIntArray(&array[row][0], LENGTH);
		row++;
	}
	return 0;
}

void printIntArray (int *ptr, int length) {
        printf("[");
        int i = 0;
        for (i = 0; i < length-1; i++) {
                printf("%d, ", *ptr);
                ptr++;
        }
        printf("%d]\n", *ptr);
}
