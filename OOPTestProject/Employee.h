#pragma once
#include "Human.h"

class Employee : public Human
{
private:
	double salary;

public:
	// default-constructor
	Employee();
	
	// canonical constructor
	Employee(string name, int age, char gender, bool alive, double salary);

	// copy-constructor
	Employee(const Employee* employee);

	// destructor
	~Employee();

	double getSalary();
	void setSalary(double salary);
};