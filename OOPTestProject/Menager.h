#include "Student.h"

class Menager {
public:

	double calculateAvgMark(Student* student) {
		double s = 0;

		for (int j = 0; j < student->count; j++) {
			s += student->marks[j];
		}

		return s / student->count;
	}

	double calculateAvgMark(Student** list, int count) {
		double sum = 0;

		for (int i = 0; i < count; i++)
		{
			sum += calculateAvgMark(list[i]);
		}

		return sum / count;
	}

	Student* getBestStudent(Student** list, int count) {
		int index = 0;
		double avg = calculateAvgMark(list[0]);

		for (int i = 1; i < count; i++)
		{
			double current_avg = calculateAvgMark(list[i]);

			if (avg < current_avg) {
				index = i;
				avg = current_avg;
			}
		}

		return list[index];
	}
};