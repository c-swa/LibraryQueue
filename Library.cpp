//include std libraries
#include <list>
//#include <map>
#include <ostream>
#include <string>

//include developed libraries
#include "Library.h"

//Class Implementation
Library::Library() {
	//Nothing to initialize
}

void Library::addBook(string bookName) {
	allBooks.push_front(Book(bookName));
}

void Library::addEmployee(string newEmployeeName) {
	allEmployees.push_front(Employee(newEmployeeName));

}

void Library::passOn(Book book, Date date) {

}