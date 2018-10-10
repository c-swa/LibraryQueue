#include <iostream>
#include "Library.h"
using namespace std;


int main(){
	Library library;
	Date date = Date(1998,11,12);

	Book book1 = Book(string("Chemistry"));
	Book book2 = Book(string("Software Engineering"));

	Employee  emp1 = Employee(0, 0, "Adam");
	Employee  emp2 = Employee(0, 0, "Sam");
	Employee  emp3 = Employee(0, 0, "Ann");

	library.addBook(book1);
	library.addBook(book2);

	library.addEmployee(emp1);
	library.addEmployee(emp2);
	library.addEmployee(emp3);
	

	library.circulateBook(book1, Date(2015, 3, 1, DateFormat::US));
	library.circulateBook(book2, Date(2015, 4, 1, DateFormat::US));
	library.passOn(book1, Date(2015, 3, 5, DateFormat::US)); //tell the next employee
	library.passOn(book1, Date(2015, 3, 7, DateFormat::US));
	library.passOn(book1, Date(2015, 3, 15, DateFormat::US)); //at this point in time,

	library.passOn(book2, Date(2015, 4, 5, DateFormat::US));
	library.passOn(book2, Date(2015, 4, 10, DateFormat::US));
	library.passOn(book2, Date(2015, 4, 15, DateFormat::US));


	return 0;
}