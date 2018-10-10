
#include "Book.h"


//Default Constructor
Book::Book() {
	this->bookName = "";
	this->archived = true;
}

//Constructor if values are known
Book::Book(string bookName) {
	this->bookName = bookName;
	this->archived = true;
}


//Takes in a bookName
//Sets the previous BookName to the new BookName
void Book::setBookName(string bookName) {
	this->bookName = bookName;
}

//Takes in a Date
//Sets the previous dStart to the new dStart
void Book::setdStart(Date dStart) {
	this->dStart = dStart;
}

//Takes in a Date
//Sets the previous dEnd to the new dEnd
void Book::setdEnd(Date dEnd) {
	this->dEnd = dEnd;
}


//Takes in a no parameters
//Returns the bookName
string Book::getBookName() {
	return this->bookName;
}

//Takes in a no parameters
//Returns the dStart
Date Book::getdStart() {
	return this->dStart;
}

//Takes in a no parameters
//Returns the dEnd
Date Book::getdEnd() {
	return this->dEnd;
}

//Takes in a no parameters
//Returns the queue
PriorityQueue Book::getQueue() {
	return this->queue;
}

//Takes in no parameters
//Returns True if there are no Employees in queue, otherwise false
bool Book::isArchived() {
	this->archived = queue.isEmpty();
	return this->archived;
}


//Takes in an employee pointer
//Pushes the employee into the queue
void Book::addEmpToQueue(Employee* e) {
	queue.push(e);
}

//Takes in a no parameters
//Pops the employee with the highest priority
void Book::removeHighPriority(){
	queue.pop();
}
