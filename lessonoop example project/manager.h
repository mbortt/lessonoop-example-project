#pragma once
#include "group.h"

class Manager {
public:

	float calcStudentAvgAge(Group group);
    float calcStudentAvgMark(Group group);
    Student findBestStudent(Group group);
	Student findWorstStudent(Group group);

};