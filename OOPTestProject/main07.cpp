//#include "Student.h"
//
//int main() {
//	int* marks1 = new int[5] {5, 7, 8, 9, 10};
//
//	Student* st01 = new Student("Alex", 14, 'm', true, marks1, 5);
//	Student* st02 = new Student(st01);
//
//	cout << "Before:\n";
//	cout << st01->toString() << endl;
//	cout << st02->toString() << endl;
//
//	for (int i = 0; i < 5; i++)
//	{
//		*(st01->marks + i) = 10;
//		//st01->marks[i] = 10;
//	}
//	
//	cout << "After:\n";
//	cout << st01->toString() << endl;
//	cout << st02->toString() << endl;
//
//	delete st01;
//	delete st02;
//
//	return 0;
//}