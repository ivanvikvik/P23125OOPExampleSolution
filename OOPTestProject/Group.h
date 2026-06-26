#pragma once
#include "Student.h"

class Group
{
private:
	string name;
	Student** list;
	int count;

public:
	Group();
	Group(string nm, Student** ls, int c);
	//Group(const Group* group);
	~Group();

	string getName();
	void setName(string nm);
	int getCount();
	Student* getStudent(int index);

	void addStudent(Student* student);
	void removeStudent(int index);

	string toString();
};

