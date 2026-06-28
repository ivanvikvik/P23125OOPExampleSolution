#pragma once
#include "Student.h"

// default-constructor
Student::Student() : Student("", 0, 'm', false, NULL, 0) {
	cout << "Student default constructor\n";	
}

Student::Student(string name, int age) : Student() {
	cout << "Student constructor 1 with arguments\n";
	this->name = name;
	this->age = age;	
}

Student::Student(int age, string name) : Student(name, age) {
	cout << "Student constructor 2 with arguments\n";		
}

// canonical constructor
Student::Student(string name, int age, char gender, bool alive,
	int* marks, int count) {
	cout << "Student canonical constructor\n";
	this->name = name;
	this->age = age;
	this->alive = alive;
	//mark = mrk;
	this->marks = marks;
	this->count = count;
	this->gender = gender;
}

// copy-constructor
Student::Student(const Student* student) : Student(student->name, 
	student->age, student->gender, student-> alive, student->marks,
	student->count) {
	
	cout << "Student copy-constructor\n";
	
	if (student->count > 0 && student->marks != nullptr) {
		marks = new int[student->count];

		for (int i = 0; i < student->count; i++)
		{
			marks[i] = student->marks[i];
		}
	}
}

// destructor
Student::~Student() {
	cout << "Student destructor\n";
	if (marks != nullptr) {
		delete[] marks;
		count = 0;
	}
}

string Student::getName() {
	return this->name;
}

void Student::setName(string name) {
	this->name = name;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int age) {
	if (age > 0) {
		this->age = age;
	}
}

char Student::getGender() {
	return gender;
}

void Student::setGender(char gender) {
	if (gender == 'm' || gender == 'f') {
		this->gender = gender;
	}
}

bool Student::isAlive() {
	return alive;
}

void Student::setAlive(bool alive) {
	this->alive = alive;
}

int Student::getCountMark() {
	return count;
}

int* Student::getMarks() {
	return marks;
}

void Student::setMarks(int* marks, int count) {
	if (count > 0 && marks != nullptr) {
		if (this->marks != nullptr) {
			delete[] this->marks;
		}
		this->marks = marks;
		this->count = count;
	}
}

string Student::toString() {
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