#pragma once

#include"Employee.h"

using namespace std;

class PriorityQueue : public Employee {
private:


public:
	void push(Employee);
	void isEmpty();
	void pop();

};
