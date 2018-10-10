
//Include Developed Libraries
#include "PriorityQueue.h"


void PriorityQueue::push(Employee * e)
{

	if (head == NULL) { // if head is null
		head = new Node<Employee*>; // 
		head->data = e;

	}
	else {
		Node<Employee*> * temp = head;
		while (temp != NULL) {
			temp = temp->next;
		}
		Node<Employee*> * newNode = new Node<Employee*>;
		newNode->data = e;
		temp->next = newNode;
	}
	employeeCount++;
}

void PriorityQueue::pop()
{
	Node<Employee*> * temp = head;
	Node<Employee*> * highest = head;

	//iterator to find the highest
	while (temp != NULL) {
		if (temp->data->getPriority() > highest->data->getPriority())
			highest = temp;
		temp = temp->next;
	}

	//Highest is the head
	if (highest == head) {
		head = head->next;
		delete highest;
	}

	//Highest at end
	 else if (highest->next == NULL) {
		delete highest;
	}

	 else {
		temp = head;
		//Find before highest to make it point to the next.
		while (temp->next != highest)
			temp = temp->next;

		Node<Employee*>* temp2 = highest->next;
		temp->next = temp2;
		delete highest;

	}
	//most cases
}
