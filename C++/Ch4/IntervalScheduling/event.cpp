#include"event.h"

/*
 Make tuple with fields of struct and ust the option to index into it. 
 This will help reuse a lot of the sorting code. Make start time = 0, finish 
 time = 1, and duration of request = 2. 
 */
Event * sort_requests(Event * events, int event_length, int (* comp)(Event *, Event *)) 
{
	return NULL;
}


/*
 Prints out all the information about the event in a readable format. 
 */
void printEvent (Event *event)
{
	std::cout << "Title: " << event->description << ", ";
	std::cout << event->start_time << "-";
	std::cout << event->finish_time << ", ";
	std::cout << "Duration: " << event->duration << std::endl;
}

