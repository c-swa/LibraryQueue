#pragma once
#include <string>

using namespace std;

class Employee {
private:
	int waitTime;
	int returnTime;
	string emp_name;
	int priority;

public:
	Employee();
	
	//Setters
	void setWaitTime(int newWait);
	void setReturnTime(int newReturn);
	void setEmployeeName(string newName);
	void setPriority(int newPriority);

	//Getters
	int getWaitTime();
	int getReturnTime();
	string getName();
	int getPriority();

	//Functions
	void updatePriority();


};