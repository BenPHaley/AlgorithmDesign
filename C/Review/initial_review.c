#include <stdio.h>
#include <string.h>

int multiply (int x, int y);
void passByValue (int x);
void changeNum (int *x);

int main () {
	char letter = 'a';		//1 byte
	int num = 100;			//4 bytes
	long num2 = 1234567L;	
	double num3 = 5.4;
	float num4 = 5.34343f;
	int random;			//garbage value is in the variable

	//0 is false, everything else is true
	char *name = "Ben Haley";	//all pointers are 8 bytes
	printf("Name: %s\n", name);
	//showing how pointers and pass by value works
	printf("Number: %d\n", num);
	printf("passByValue(%d)", num);
	passByValue(num);
	printf(" = %d\n", num);
	printf("changeNum(%d)", num);
	changeNum(&num);
	printf(" = %d\n", num);

	const int *p;			//can't change value at pointer location
	int *const q;			//can't change address

	char str[] = "word";		//length is 5, space for null character, \0
	char *another_str = "Another string\0"; 

	if (strcmp(str, another_str)) {
		printf("First string = %d, second string length = %d;\n", (int)strlen(str), (int)strlen(another_str));
	}

	//arrays are stored in row major order
	//can iterate through a 2D array as if it is a single D aray
		
	return 0;
}

int multiply (int x, int y) {
	return x * y;
}

void passByValue (int x) {
	x = x + 10;
}

void changeNum (int *x) {
	*x = *x + 10;
}
