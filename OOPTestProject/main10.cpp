#include "Menager.h"

int main() {
	int* marks01 = new int[2] {7, 9};
	int* marks02 = new int[3] {7, 9, 8};
	int* marks03 = new int[4] {7, 9, 9, 9};
	int* marks04 = new int[5] {7, 9, 10, 10, 9};
	int* marks05 = new int[6] {8, 9, 10, 8, 8, 8};

	Student* st01 = new Student("Alex", 14, 'm', true, marks01, 2);
	Student* st02 = new Student("Anna", 13, 'f', true, marks02, 3);
	Student* st03 = new Student("Harry", 13, 'm', true, marks03, 4);
	Student* st04 = new Student("Alice", 15, 'f', true, marks04, 5);
	Student* st05 = new Student("Peter", 14, 'm', true, marks05, 6);

	Group* group = new Group();
	group->setName("P23125");

	Menager* menager = new Menager();

	group->addStudent(st01);
	group->addStudent(st02);
	group->addStudent(st03);
	group->addStudent(st04);
	group->addStudent(st05);

	group->removeStudent(3);

	if (group->getCount() != 0) {
		cout << "Average mark of students's list is "
			<< menager->calculateAvgMark(group) << ".\n";
	}

	cout << group->toString() << endl;

	delete group;

	delete st01;
	delete st02;
	delete st03;
	delete st04;
	delete st05;

	return 0;
}