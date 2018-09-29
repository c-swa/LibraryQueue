#pragma once
//Include std libraries
#include <string>

//Include developed libraries
#include "Book.h"
#include "Employee.h"
#include "PriorityQueue.h"
//Kuhail Libraries
#include "Date.h"
#include "StringTokenizer.h"


using namespace std;

class Library {
private:
	//List of all employees documented at the Library
	std::list<Employee> allEmployees;
	//List of all Books in the library
	std::list<Book> allBooks;

public:
	Library();
	//Pass Book to the next employee with highest priority
	void passOn(Book book, Date date);

	//Begins the queue, and circulates the book.
	void circulateBook(Book book, Date date);
	void archiveBook(Book book, Date date);

	//Add Employee to the list of employees
	void addEmployee(string employeeName);
	//Add Book to the list of books
	void addBook(string bookName);
};