#pragma once

#include"Employee.h"

using namespace std;

template<typename typeT>
struct Node {
	Node *next;
	typeT data;
};

class PriorityQueue : public Employee {
private:

	//Number of employees in the queue
	int employeeCount;
	Node<Employee*> * head;

	

public:
	//constructor
	PriorityQueue() {
	};

	//destructor
	~PriorityQueue() {
		Node<Employee*>* temp;
		while (head != NULL) {

			temp = head;
			head = head->next;
			delete temp;
		}
	}

	//Add employees to the queue (don't order)
	void push(Employee* e);

	//Returns bool status of the queue
	bool isEmpty() {
		if (employeeCount == 0)
			return true;
		else
			return false;
	}

	//Remove the employee that has the highest priority (total) from the queue
	//Priority is NOT per queue, but per employee for all the books the employee wishes to check out.
	void pop();

};
