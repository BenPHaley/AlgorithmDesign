# Interval Scheduling Attempt 1

Created the event structure with one field, a tuple. I created it this way to 
allow my heapsort function to sort the events by start time, finish time or 
event duration. Turns out that when using the get<> function for tuples the 
input index must be a constexpr. Looked into how to use constant expressions 
and tried to make it work by making all references to the variable constant 
expressions too. This didn't work.

Instead of using a tuple, I have decided to write 3 comparator functions, one 
for each variable I want to sort over. I will pass the comparator function I 
want to use to sort into the heapsort function.

The comparator funciton interval scheduling is implemented in the parent 
directory of the current directory. 


