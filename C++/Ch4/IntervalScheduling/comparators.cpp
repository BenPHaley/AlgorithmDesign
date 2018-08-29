#include<iostream>
#include"comparators.h"

/*
ompares the start times of the two parameter events. Returns 1 if the 
 first event's start time is larger than the second ones, -1 if the first
 start time is smaller than the second one, and 0 if they have the same start
 time. 
 */
int compStartTime (Event * first, Event * second) 
{
	std::cout << "Comparator" << std::endl;
	int output = 0;
	
	if (first->start_time < second->start_time)
	{
		output = -1;
	}
	else if (first->start_time > second->start_time)
	{
		output = 1;
	}
	std::cout << "Finished Comparator\n";
	return output;
}

/*
 Compares the finish times of the two parameter events. Returns 1 if the
 first event's finish time is larger than the second ones, -1 if the first
 finish time is smaller than the second one, and 0 if they have the same finish
 time. 
 */
int compFinishTime (Event * first, Event * second) 
{
	int output = 0;

	if (first->finish_time < second->finish_time)
	{
		output = -1;
	}
	else if (first->finish_time > second->finish_time)
	{
		output = 1;
	}

	return output;
}


/*
 Compares the duration of the two parameter events. Returns 1 if the 
 first event is longer than the second one, -1 if the first event is shorter
 than the second one, and 0 if they have the duration. 
 */
int compDuration (Event * first, Event * second) 
{
	int output = 0;

	if (first->duration < second->duration)
	{
		output = -1;
	}
	else if (first->duration > second->duration)
	{
		output = 1;
	}

	return output;
}


