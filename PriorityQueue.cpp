//Include Developed Libraries
#include "PriorityQueue.h"

template<typename t>
inline void PriorityQueue<t>::push(Employee * e)
{
	new Node front_of_queue == head; // node for the head

	if (front_of_queue == NULL) { // if head is null
		back_of_queue = new Node(e, NULL); // 
		front_of_queue = back_of_queue;
	}
	else {
		back_of_queue->next = new Node(e, NULL);
		back_of_queue = back_of_queue->next;
	}
	employeeCount++;
}

template<typename t>
inline void PriorityQueue<t>::pop()
{
	/*  1. iterate through the line of employees
		2. compare each item to the current high/initialized as 0;
		3. if item is < current high, keep current high
		4. if item is > current high, change item to new current high
		5. make a temp var. to delete later.
		6.  */

	Node<string>* current_high = head;
	while (current_high != NULL) {
		if (current_high->next != NULL)
			current_high = current_high->next;
	}

	if (current_high > current_high->next) {
		return current_high;

	else if (current_high < current_high->next)
		current_high->next == current_high;
	}


	
}


