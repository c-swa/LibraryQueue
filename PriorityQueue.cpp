
//Include Developed Libraries
#include "PriorityQueue.h"
#include <iostream>


void PriorityQueue::push(Employee * e)
{

	if (head == NULL) { // if head is null
		head = new Node<Employee*>; // 
		head->data = e;

	}

	else {
		
		Node<Employee*> * temp = head;
		int i = 0;
		
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = new Node<Employee*>;
		temp->data = e;
		
	}

	employeeCount++;
}

void PriorityQueue::pop()
{
	Node<Employee*> * temp = head;
	Node<Employee*> * highest = head;

	//iterator to find the highest
	while (temp->next != NULL) {
		if (temp->data->getPriority() > highest->data->getPriority())
			highest = temp;
		temp = temp->next;
	}

	//Highest is the head
	if (highest == head) {
		temp = head;
		while (temp->next != NULL) {
			temp->data->setWaitTime(highest->data->getRetainingTime());
			temp->data->updatePriority();
			temp = temp->next;
		}
		head = head->next;
		delete highest;
	}

	//Highest at end
	 else if (highest->next == NULL) {
		temp = head;
		while (temp->next != NULL) {
			temp->data->setWaitTime(highest->data->getRetainingTime());
			temp->data->updatePriority();
			temp = temp->next;
		}
		delete highest;
	}

	 else {
		//Add retaining and waiting to new set of employees
		temp = head;
		while (temp->next != NULL) {
			temp->data->setWaitTime(highest->data->getRetainingTime());
			temp->data->updatePriority();
			temp = temp->next;
		}

		//Find before highest to make it point to the next.
		while (temp->next != highest)
			temp = temp->next;

		Node<Employee*>* temp2 = highest->next;
		temp->next = temp2;
		delete highest;
	}
	employeeCount--;
	//most cases
}
