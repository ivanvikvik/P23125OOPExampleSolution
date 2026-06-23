#include "Group.h"

class Menager {
private:
	double calculateAvgMark(Student* student);

public:
	double calculateAvgMark(Group* group);
	Student* getBestStudent(Group* group);
};