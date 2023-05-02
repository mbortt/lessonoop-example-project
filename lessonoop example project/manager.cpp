#include "manager.h"

float Manager::calcStudentAvgAge(Group group) {

	float avg = 0;

	for (int i = 0; i < group.getSize(); i++)
	{
		Student st = group.getStudent(i);
		avg += st.getAge();

	}

	return avg / group.getSize();
}


float Manager::calcStudentAvgMark(Group group) {
	float avg = 0;

	for (int i = 0; i < group.getSize(); i++)
	{
		Student st = group.getStudent(i);
		avg += st.getAvgmark();

	}

	return avg / group.getSize();
}
Student Manager::findBestStudent(Group group) {
	Student st = group.getStudent(0);

	for (int i = 1; i < group.getSize(); i++) {

		if (group.getStudent(i).getAvgmark() > st.getAvgmark()) {
			st = group.getStudent(i);
		}
	}
	return st;
}
Student Manager::findWorstStudent(Group group) {
	Student st = group.getStudent(0);

	for (int i = 1; i < group.getSize(); i++) {

		if (group.getStudent(i).getAvgmark() < st.getAvgmark()) {
			st = group.getStudent(i);
		}
	}
	return st;
}
