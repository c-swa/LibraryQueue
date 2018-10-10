
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
	Node<Employee>* temp = head;
	Node<Employee>* highest = head;

	//iterator to find the highest
	while (temp != NULL) {
		if (temp->data > highest->data)
			highest = temp;
		temp = temp->next;
	}

	//Highest is the head
	if (highest == head) {
		head = head->next;
		del highest;
	}

	//Highest at end
	 else if (highest->next == NULL) {
		del highest;
	}

	 else {
		temp = head;
		//Find before highest to make it point to the next.
		while (temp->next != highest)
			temp = temp->next;

		Node<Employee>* temp2 = highest->next;
		temp->next = temp2;
		del highest;

	}
	//most cases
}
