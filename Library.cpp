
//include std libraries
#include <list>
//#include <map>
#include "Book.h"
#include "Employee.h"
#include <ostream>
#include <string>

//include developed libraries
#include "Library.h"

//Class Implementation
Library::Library() {
	//Nothing to initialize
}

void Library::addBook(Book book) {

	allBooks.push_front(book);
}

void Library::addEmployee(Employee newEmployee) {
	//Employee * emp =  newEmployee;
	allEmployees.push_front(newEmployee);

}

void Library::passOn(Book book, Date date) {
	if (allEmployees.size() == 0) {
		book.setdEnd(date);
		book.isArchived();
	}
	else {
		for (std::list<Employee>::iterator it = allEmployees.begin(); it != allEmployees.end(); ++it) {
			book.removeHighPriority();
		}
	}
}

void Library::circulateBook(Book book, Date date) {
	book.setdStart(date);
	for (std::list<Employee>::iterator it = allEmployees.begin(); it != allEmployees.end(); ++it) {
		book.addEmpToQueue(&*it);
	}


}
