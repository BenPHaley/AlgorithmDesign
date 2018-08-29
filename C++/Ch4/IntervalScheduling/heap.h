#ifndef HEAP
#define HEAP

#include<tuple>
#include<iostream>
#include"event.h"

/*
 Binary min heap. The heap is a list of Event pointers. 
 */
class Heap
{
	public:
	struct event **list;
	int list_length;
	// Comparator function to allow heap to be created using different 
	// fields of the events
	int (* comp)(struct event *, struct event *);

	/*
	 Constructor that takes one parameter. The parameter will be used to 
	 set the option field of the heap. This will determine what number 
	 field to use from the tuple to create the heap. 
	 */
	Heap (int (*const comp)(struct event *, struct event *));


	/*
	 Inserts a new element into the heap at the bottom most left position.
	 Moves the element to its correct position in the heap. 
	 */
	void addNode (struct event *element);

	/*
	 Saves the root of the heap and then replaces the root with the 
	 bottom left most element. Next moves the new root node into its
	 proper position by comparing to its children.
	 */
	struct event * removeNode ();

	/*
 	 Prints the heap in breadth first order.
	 */
	void printHeap ();
};

#endif
