#include "Human.h"

// default-constructor
Human::Human() : Human("", 0, 'm', false) {
	cout << "Human default constructor\n";
}

Human::Human(string name, int age) : Human() {
	cout << "Human constructor 1 with arguments\n";
	this->name = name;
	this->age = age;
}

Human::Human(int age, string name) : Human(name, age) {
	cout << "Human constructor 2 with arguments\n";
}

// canonical constructor
Human::Human(string name, int age, char gender, bool alive) {
	cout << "Human canonical constructor\n";
	this->name = name;
	this->age = age;
	this->alive = alive;
	this->gender = gender;
}

// copy-constructor
Human::Human(const Human* student) : Human(student->name,
	student->age, student->gender, student-> alive) {
	cout << "Human copy-constructor\n";
}

// destructor
Human::~Human() {
	cout << "Human destructor\n";	
}

string Human::getName() {
	return this->name;
}

void Human::setName(string name) {
	this->name = name;
}

int Human::getAge() {
	return age;
}

void Human::setAge(int age) {
	if (age > 0) {
		this->age = age;
	}
}

char Human::getGender() {
	return gender;
}

void Human::setGender(char gender) {
	if (gender == 'm' || gender == 'f') {
		this->gender = gender;
	}
}

bool Human::isAlive() {
	return alive;
}

void Human::setAlive(bool alive) {
	this->alive = alive;
}

string Human::toString() {
	string s = "";
		
	s += "Human: " + name + ", age = " + to_string(age)
		+ ", gender = " + gender + ", alive = " 
		+ (alive ? "yes" : "no");

	return s;
}
