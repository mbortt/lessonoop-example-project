#include "student.h"

float Manager::calcStudentAvgAge(Group group){

	float avg = 0;

	for (int i = 0; i < group.getSize; i++) 
	{
		Student st = group.grtStudent;
		avg += st.getAge;

	}

	return avg / group.getSize;
}
