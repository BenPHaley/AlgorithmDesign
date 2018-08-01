#include <>

// Enumeration. Can refer to these by name 
enum color {red, blue, yellow};

/*
 <function return type> <function name> (<formal argument list>);
 Can provide default values for the trailing arguments. 
 Function overloading supported
 Add & to end of type of paramter to make changes to that parameter in the 
 function permanent even when the function ends. 
 */

/*
 Declarations
 Defined - when the variable is created
 Declared - when it already exists but needs to be re-described to the compiler
 ** You can only DEFINE a varible once but you can DECLARE it many times. **

 int *const p - constant pointer to an integer
 const int *p - pointer to a constant int. (constant int, pointer)
 */

/*
 Memory Allocation
 `new[]` creates an array by alloting space. `delete[]` funciton removes the 
 allocated space.

 
 */
int main () {
	// Printing "Hello World!" to stdout
	std::cout << "Hello World!" << endl;
	
	int i(5);
	if (i > 0) {
		std::cout << "i = " << i << endl;
	}
	else {
		std::cout << "i is less than 0" << endl;
	}
	
	// switch statement. Can have default case. Need to use breaks
	switch(i) {
		case 1: printf("First switch statement\n");
			break;
		case 2: printf("Second switch statement\n");
			break;
		case 3: printf("Third switch statement\n");
			break;
		default: printf("The default case\n");
			break;
	}

	// while statement. The loop variable must be defined before the 
	// condition
	while (i > 0) {
		i--;
	}	
	
	// do-statement
	do {
		i += 2;
	} while (i < 13);
	
	// For statement. Can initialize the loop variable in expression 1 of 
	// the for loop condition
	int total(0);
	for (int x(0); x < 10; x++) {
		total += x;
	}

	// Aggregation - variables of the same or different types can be 
	// bundled together into a single object.
	char letter[50];
	char strings[10][80];

	// Vectors are an alternative to arrays because they can grow on 
	// demand and have many built in functions

	// Pointers
	int number(1337);
	int *intPtr = &number;
	
	int numbers[10] = {1, 2,3, 4, 5, 6, 7,8 9, 10};
	// This is shorthand for `int *index = &numbers[0];`
	int *index = numbers;
	for (int x(0); x < 10; x++) {
		std::cout << x << " ";
	}
	std::cout << endl;

	// Memory allocation for an array
	int array;
	std::cout << "Type an integer ";
	std::cin >> array;
	// If there isn't enough space `new[]` will cause bad_alloc exception
	int *ia = new int[i];
	delete[] ia;
	
	return 0;
}


// Creating a class
class person {
	int age;
	string surname;
};

// Can set Ben = Chris but cannot then go and compare them like Ben == Chris
// You must compare field by field. 
person Ben, Chris;



// Creating a Struct
typedef struct {
	int age;
	string subject;
	string name;
} Teacher;

// Function that takes two person structs and adds their ages. Returns the 
// sum of their ages. 
int sum_of_ages (person *p1, person *p2) {
	int sum;
	
	// Dereferencing and obtaining fields of each struct
	sum = *p1.age + *p2.age;
	// sum = p1->age + p2->age; // This is better notation, just like C
	return sum;
}



// Creating a namespace to allow scope to be chosen
// Can access list by doing test::list
// Add  `using namespace test` at the top of a file so you can use the 
// variables without the test:: prefix
namespace test {
	int list[] = new int[10];
}


