
#include "Employee.h"

//Default Constructor for employee
Employee::Employee() {
	this->waitTime = 0;
	this->retainingTime = 0;
	this->emp_name = "";
}


//Constructor for employee if values are known
Employee::Employee(int waitTime, int retainingTime, string name) {
	this->waitTime = waitTime;
	this->retainingTime = 0;
	this->emp_name = name;
}

//Takes in a new waiting time
//Sets the previous waitTime to newWait, changes the wait time
void Employee::setWaitTime(int newWait) {
	this->waitTime = newWait;
}

//Takes in a new retaining time
//Sets the previous retainingTime to newRetaining, changes the retaining time
void Employee::setRetainingTime(int newRetaining) {
	this->retainingTime = newRetaining;
}

//Takes in a new employee name 
//Sets the previous emp_name to newName, changes the employee's name
void Employee::setEmployeeName(string newName) {
	this->emp_name = newName;
}



//Takes in no parameters
//Returns the waitTime
int Employee::getWaitTime() {
	return waitTime;
}

//Takes in no parameters
//Returns the retainingTime
int Employee::getRetainingTime() {
	return retainingTime;
}

//Takes in no parameters
//Returns the emp_name
string Employee::getName() {
	return emp_name;
}

//Takes in no parameters
//Returns the priority
int Employee::getPriority() {
	return priority;
}


//Takes in no parameters
//Updates the priority to the waitTime - retainingTime
void Employee::updatePriority() {
	this->priority = waitTime - retainingTime;
}