#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	string name;
	int age;
	//double mark;
	char gender;
	bool alive;
	int* marks;
	int count;
	
public:
	// default-constructor
	Student();
	
	Student(string nm, int ag);
	Student(int ag, string nm);

	// canonical constructor
	Student(string nm, int ag, char gndr, bool a, int* mrks, int cnt);
	
	// copy-constructor
	Student(const Student* student);
	
	// destructor
	~Student();

	string getName();
	void setName(string nm);
	int getAge();
	void setAge(int a);
	char getGender();
	void setGender(char g);
	bool isAlive();
	void setAlive(bool a);
	int getCountMark();
	int* getMarks();
	void setMarks(int* m, int c);

	string toString();
};