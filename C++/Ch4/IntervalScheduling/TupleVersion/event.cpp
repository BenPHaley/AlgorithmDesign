#include"event.h"

/*
 Make tuple with fields of struct and ust the option to index into it. 
 This will help reuse a lot of the sorting code. Make start time = 0, finish 
 time = 1, and duration of request = 2. 
 */
Event * sort_requests(Event * events, int event_length, constexpr int option) 
{
	return NULL;
}


/*
 Prints out all the information about the event in a readable format. 
 */
void printEvent (Event *event)
{
	std::cout << "Title: " << std::get<0>(event->info) << ", ";
	std::cout << std::get<1>(event->info) << "-";
	std::cout << std::get<2>(event->info) << ", ";
	std::cout << "Duration: " << std::get<3>(event->info) << std::endl;
}

