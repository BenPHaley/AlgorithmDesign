#include"resource.h"
/*
 Default constructor for a resource object.
 */
resource::resource() 
{
	s_available = 0;
	f_available = 0;
	description = "void";
	events = NULL;
	events_length = 0;
}

/*
 Constructor that can take 3, 4 or 5 parameters. Should never use this 
 as a four parameter constructor. If 4 parameters are specified, 
 events_length will be set to zero regardless of paramter input. 
 The first two parameters are neccessary as those are the start and 
 finishing available times of the resource. The third parameter is an 
 80 character descriptor of the resource. The last two paramters are 
 optional as they are the list of events that want the resource and 
 the number of resources in that list. 
*/
resource::resource(int s_available, int f_available, std::string description, 
		int events_length, Event *events) 
{
	this->s_available = s_available;
	this->f_available = f_available;
	this->description = description;
	this->events_length = events_length;
	this->events = events;
}
	
/*
 Destructor - special member function that is called by the compiler 
 when the scope of the object ends. 
 */
resource::~resource()
{
	std::cout << "Destructor called for : " << description;
	std::cout << std::endl;
}	


/*
 Adds a request to the list of requests for this resource.

 Should check whether event is within the resource's availability slot
 */
void resource::enterRequest(Event *event) 
{
	if (events_length == 0)
	{
		// Adds the first event to the list
		events = event;
		events_length++;
	}
	else 
	{
		// Allocates enough space for one other event
		events = (Event *)realloc(events,sizeof(events)+sizeof(Event));
		// Adds the event to the list
		events[events_length] = *event;
		events_length++;
	}
}


std::tuple<Event*, int> * resource::start_earliest ()
{	// Will sort the events in ascending order of start time
	Event *sorted = sort_requests(events, events_length, compStartTime);

	// Iterate over the sorted list.
	// Add the current event to the output list. 
	// Remove all events that conflict with the current event from the 
	// sorted list. 
	// Repeat until the sorted array is empty

	// Return the output array
}

std::tuple<Event*, int> * resource::smallest_interval ()
{
	// Will sort the events in ascending order of duration of event
	Event *sorted = sort_requests(events, events_length, compDuration);

	// Iterate over the sorted list
	// Add the current event to the output list
	// Remove all events that conflict with the current event from the 
	// sorted list
	// Repeat until the sorted list is empty

	// Return the output list
}

std::tuple<Event*, int> * resource::least_conflicts () 
{
	// Need to figure out an efficient way to find all the conflicts
	/*
	 Sort on start time. 
	 Select the first event and compare its finish time with the next 
	  events start time. This will tell you if the event has a conflict.
	 Move onto the next event when the current event's finish time is 
	  smaller than the next event's start time. 
	 */
}

std::tuple<Event*, int> * resource::finish_earliest () 
{
	// Sort in ascending order of finish times of the events
	Event *sorted = sort_requests(events, events_length, compFinishTime);
	
	// Iterate through the sorted list. Place the current event into the 
	// output list. Then remove all conflicting events from the sorted 
	// list. 
	// Repeat until there are no more events in the sorted list. 

	// Return the output list
}

