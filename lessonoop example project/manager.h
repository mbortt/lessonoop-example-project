#pragma once
#include "student.h"

class Manager {
public:

	float calcStudentAvgAge(Student* list, int size);

	float calcStudentAvgMark(Student* list, int size);

     Student findbestStudentAvgAge(Student* list, int size);
	 Student findworstStudentAvgAge(Student* list, int size);

};