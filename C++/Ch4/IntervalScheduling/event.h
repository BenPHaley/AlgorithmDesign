#ifndef EVENT
#define EVENT

#include<tuple>
#include<string>
#include<iostream>
#include"heap.h"

/* 
 Event struct defines an event. An event has two integers: start_time and 
 finish_time; which signify the starting and finishing time respectively. 
 The last field is a string which gives the name of the event. 
 */
typedef struct event {
	// Description, start_time, finish_time, duration
	std::string description;
	int start_time;
	int finish_time;
	int duration; 
} Event;

/*
 Make tuple with fields of struct and ust the option to index into it. 
 This will help reuse a lot of the sorting code. Make start time = 0, finish 
 time = 1, and duration of request = 2. 
 */
Event * sort_requests(Event * events, int event_length, int (*const comp)(Event *, Event *));


/*
 Prints the name of the event followed by the start and ending time of the 
 event. Finally it will give the duration time of the event. This is all 
 printed to STDOUT.
 */
void printEvent (Event *event);

#endif

