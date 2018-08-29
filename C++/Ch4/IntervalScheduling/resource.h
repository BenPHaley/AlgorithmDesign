#ifndef RESOURCE
#define RESOURCE

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<tuple>
#include"event.h"
#include"comparators.h"

/* 
 Defines a class named resource. This resource has two integers specifying the 
 starting and ending time the resource is available from. The last field is 
 an events array, which holds all the event requests this resource has. 
 */

class resource 
{
	public:
	// Data members
	int s_available;
	int f_available;
	Event *events;
	int events_length;
	std::string description;

	resource ();
	resource (int s_available, int f_available, std::string description, 
		int events_length = 0, 
		Event *events = (Event*)calloc(1, sizeof(Event)));

	// Destructor
	~resource ();
	
	// Adds a request to the list of requests for this resource
	void enterRequest (Event *event);

	// 4 greedy algorithms to solve the interval scheduling problem. 
	// The first three do not always give the optimal solution; however, 
	// the last function always gives the optimal solution. 
	std::tuple<Event*, int> * start_earliest ();
	std::tuple<Event*, int> * smallest_interval ();
	std::tuple<Event*, int> * least_conflicts ();
	std::tuple<Event*, int> * finish_earliest ();
	

};

#endif

