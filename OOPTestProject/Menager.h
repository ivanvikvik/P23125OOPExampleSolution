#include "Student.h"

class Menager {
private:
	double calculateAvgMark(Student* student);

public:
	double calculateAvgMark(Student** list, int count);
	Student* getBestStudent(Student** list, int count);
};