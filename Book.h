#pragma once
#include<string>
#include "PriorityQueue.h"
#include "Date.h"
#include "Employee.h"
using namespace std;

class Book {
private:
	string bookName;
	Date dStart;
	Date dEnd;
	bool archived;
	PriorityQueue<Employee*> queue;
public:
	
	//Constructors
	Book();
	Book(string bookName, Date dStart, Date dEnd);

	//Setters
	void setBookName(string bookName);
	void setdStart(Date dStart);
	void setdEnd(Date dEnd);

	//Getters
	string getBookName();
	Date getdStart();
	Date getdEnd();
	PriorityQueue<Employee*> getQueue();


	//Functions
	bool isArchived();
	void addEmpToQueue(Employee* e);
	void removeHighPrioQueue();
};