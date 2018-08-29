#include<tuple>
#include<cstdlib>
#include<cstdio>
#include"resource.h"

int main () 
{
	Event *first = (Event*)std::calloc(1, sizeof(Event));
	//std::tuple<int, int> temp = std::make_tuple(1, 3);
	first->info = std::make_tuple("CMSC", 2, 3, 1);
	
	first = (Event*)std::realloc(first, sizeof(Event)*2);
	first[1].info = std::make_tuple("ENEE", 2, 4, 2);
 	
	printEvent(first);
	first++;
	printEvent(first);
	first--;

	Heap h(0);
	Heap *heap = &h;

	heap->list[0] = first; 
	heap->list = (Event**)std::realloc(heap->list, sizeof(Event*)*2);
	heap->list[1] = first+1;
	heap->list_length = 2;

	std::cout << "About to print from heap" << std::endl;
	
	printEvent(heap->list[0]);
	printEvent(heap->list[1]);


	std::cout << "Should print heap using member function" << std::endl;
		
	heap->printHeap();	

	std::cout << "Making heap using the addNode() function" << std::endl;

	Heap h1(0);
	Heap *heap2 = &h1;
	
	heap2->addNode(first);
	heap2->printHeap();
	heap2->addNode(first+1);
	heap2->printHeap();
	
	return 0;
}
