#include "Group.h"

Group::Group(){
	list = nullptr;
	count = 0;
	name = "no name";
}

Group::Group(string nm, Student** ls, int c) {
	name = nm;

	if (ls != nullptr && c > 0) {
		list = ls;
		count = c;
	}
	else {
		list = nullptr;
		count = 0;
	}

}
//Group(const Group* group){}

Group::~Group() {
	if (count > 0 && list != nullptr) {
		count = 0;
		delete[] list;
	}
}

string Group::getName() {
	return name;
}

void Group::setName(string nm) {
	name = nm;
}

int Group::getCount() {
	return count;
}

Student* Group::getStudent(int index) {
	if (list != nullptr && index >= 0 && index < count) {
		return list[index];
		//return *(list + index);
	}
	return nullptr;
}

void Group::addStudent(Student* student) {
	if (count == 0 && list == nullptr) {
		list = new Student*[1];
		count = 1;
		list[0] = student;
	}
	else {
		Student** temp = new Student*[count + 1];

		for (int i = 0; i < count; i++)
		{
			temp[i] = list[i];
		}

		temp[count] = student;

		delete[] list;
		list = temp;
		count++;
	}
}

void Group::removeStudent(int index) {
	if (list != nullptr && count > 0 && index >= 0 && index < count) {
		Student** temp = new Student*[count - 1];

		for (int i = 0, j = 0; i < count; i++)
		{
			if (i != index) {
				temp[j] = list[i];
				j++;
			}
		}

		delete[] list;
		list = temp;
		count--;
	}
}

string Group::toString() {
	string s = "Group - " + name + ":";

	if (list != nullptr && count > 0) {
		for (int i = 0; i < count; i++)
		{
			s += "\n" + to_string(i + 1) + ") " + list[i]->toString();
		}
	}
	else {
		s += " is empty.";
	}

	return s;
}