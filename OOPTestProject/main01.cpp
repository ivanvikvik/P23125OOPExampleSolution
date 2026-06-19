//#include "Student.h"
//
//Student findBestStudent(Student list[]) {
//	Student best = list[0];
//
//	for (int i = 1; i < 3; i++)
//	{
//		if (best.mark < list[i].mark) {
//			best = list[i];
//		}
//	}
//
//	return best;
//}
//
//int main() {
//	int number = 234;
//	
//	Student st01, st02, st03, alex;
//
//	st01.name = "Alex";
//	st01.age = 14;
//	st01.alive = true;
//	st01.mark = 9.5;
//	st01.gender = 'm';
//
//	st02.name = "Anna";
//	st02.age = 13;
//	st02.alive = true;
//	st02.mark = 7.8;
//	st02.gender = 'f';
//
//	st03.name = "Harry";
//	st03.age = 13;
//	st03.alive = true;
//	st03.mark = 9.9;
//	st03.gender = 'm';
//
//	alex = st03;
//
//	Student list[]{ st01, st02, st03 };
//
//	cout << findBestStudent(list).name << endl;
//
//	return 0;
//}