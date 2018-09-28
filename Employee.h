#pragma once
#include <string>

using namespace std;

class Employee {
private:
	int waitTime;
	int retainingTime;
	string emp_name;
	int priority;

public:
	Employee();
	Employee(int waitTime, int retainingTime, string name);
	
	//Setters
	void setWaitTime(int newWait);
	void setRetainingTime(int newRetaining);
	void setEmployeeName(string newName);

	//Getters
	int getWaitTime();
	int getRetainingTime();
	string getName();
	int getPriority();

	//Functions
	void updatePriority();


};