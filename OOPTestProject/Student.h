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

	// default-constructor
	Student() {
		cout << "Student default constructor\n";
		name = "";
		age = 0;
		alive = false;
		//mark = 0;
		marks = NULL;
		count = 0;
		gender = '\0';
	}

public:
	
	

	Student(string nm, int ag) {
		cout << "Student constructor with arguments\n";
		name = nm;
		age = ag;
		alive = false;
		//mark = 0;
		marks = NULL;
		count = 0;
		gender = '\0';
	}

	Student(int ag, string nm) {
		cout << "Student constructor with arguments\n";
		name = nm;
		age = ag;
		alive = false;
		//mark = 0;
		marks = NULL;
		count = 0;

		gender = '\0';
	}

	// canonical constructor
	Student(string nm, int ag, char gndr, bool a, int* mrks, int cnt) {
		cout << "Student canonical constructor\n";
		name = nm;
		age = ag;
		alive = a;
		//mark = mrk;
		marks = mrks;
		count = cnt;
		gender = gndr;
	}

	// copy-constructor
	Student(const Student* student) {
		cout << "Student copy-constructor\n";
		name = student->name;
		age = student->age;
		alive = student->alive;
		//mark = student->mark;
		marks = student->marks;
		count = student->count;
		gender = student->gender;
	}

	// destructor
	~Student() {
		cout << "Student destructor\n";
		if (marks != nullptr) {
			delete[] marks;
			count = 0;
		}
	}

	string getName() {
		return name;
	}

	void setName(string nm) {
		name = nm;
	}

	int getAge() {
		return age;
	}

	void setAge(int a) {
		if (a > 0) {
			age = a;
		}
	}

	char getGender() {
		return gender;
	}

	void setGender(char g) {
		if (g == 'm' || g == 'f') {
			gender = g;
		}
	}

	bool isAlive() {
		return alive;
	}

	void setAlive(bool a) {
		alive = a;
	}

	int getCountMark() {
		return count;
	}

	int* getMarks() {
		return marks;
	}

	void setMarks(int* m, int c) {
		if (c > 0 && m != nullptr) {
			if (marks != nullptr) {
				delete[] marks;
			}
			marks = m;
			count = c;
		}
	}

	string toString() {
		string s = "";

		string mrks = "";

		for (int i = 0; i < count; i++)
		{
			mrks += to_string(*(marks + i)) + " ";
		}

		s += "Student: " + name + ", age = " + to_string(age)
			+ ", gender = " + gender + ", mark = " + mrks
			+ ", alive = " + (alive ? "yes" : "no");

		return s;
	}
};