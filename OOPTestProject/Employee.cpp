#include "Employee.h"

// default-constructor
Employee::Employee() {
	cout << "Employee default-constructor...\n";
}

// canonical constructor
Employee::Employee(string name, int age, char gender, bool alive, 
	double salary) : Human(name, age, gender, alive) {
	cout << "Employee canonical constructor...\n";
	this->salary = salary;
}

// copy-constructor
Employee::Employee(const Employee* employee) : Human(employee) {
	cout << "Employee copy-constructor...\n";	
	this->salary = employee->salary;
}

// destructor
Employee::~Employee() {
	cout << "Employee destructor...\n";
}

double Employee::getSalary() {
	return salary;
}

void Employee::setSalary(double salary) {
	if (salary >= 0) {
		this->salary = salary;
	}
}