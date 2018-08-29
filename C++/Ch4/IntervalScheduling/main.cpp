#include<tuple>
#include<cstdlib>
#include<cstdio>
#include"resource.h"

int main () 
{
	// Creating events list to test making and printing events
	Event *first = (Event*)std::calloc(1, sizeof(Event));
	//std::tuple<int, int> temp = std::make_tuple(1, 3);
	//first->info = std::make_tuple("CMSC", 2, 3, 1);
	first->description = "CMSC";
	first->start_time = 2;
	first->finish_time = 3;
	first->duration = 1;

	first = (Event*)std::realloc(first, sizeof(Event)*2);
	//first[1].info = std::make_tuple("ENEE", 2, 4, 2);
	first[1].description = "ENEE";
	first[1].start_time = 2;
	first[1].finish_time = 4;
	first[1].duration = 2;
 	
	std::cout << "Printing two events created in a list" << std::endl;	
	printEvent(first);
	first++;
	printEvent(first);
	first--;
	std::cout << std::endl;

	// Creates a heap
	Heap h(compStartTime);
	Heap *heap = &h;

	// Adds two events to the heap by directly modifying the heap list
	heap->list[0] = first; 
	heap->list = (Event**)std::realloc(heap->list, sizeof(Event*)*2);
	heap->list[1] = first+1;
	heap->list_length = 2;

	std::cout << "About to print from heap" << std::endl;
	
	// Using member printHeap() function to print the heap
	std::cout << "Created a heap and added two events to it by directly";
	std::cout << " editing the field list." << std::endl;
	printEvent(heap->list[0]);
	printEvent(heap->list[1]);


	std::cout << "Prints heap using printHeap() member function" << std::endl;
	heap->printHeap();	


	// Creating a second heap that will be created by using the member 
	// function addNode()
	std::cout << "Making heap using the addNode() function" << std::endl;
	Heap h1(compStartTime);
	Heap *heap2 = &h1;
	
	// Adds two events to the heap
	heap2->addNode(first);
	heap2->printHeap();
	heap2->addNode(first+1);
	heap2->printHeap();
	
	std::cout << "Adding event to heap that should become the root";
	std::cout << std::endl;
	first = (Event *) realloc(first, sizeof(Event)*3);
	
	// Adds third event to heap2
	first[2] = {"MATH", 1, 5, 4};
	heap2->addNode(first+2);
	std::cout << "Finished adding the third node\n";
	

	
	
	heap2->printHeap();

	
	
	std::cout << "Completed Program\n";
	return 0;
}
