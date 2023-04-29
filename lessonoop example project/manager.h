#pragma once
#include "group.h"

class Manager {
public:

	float calcStudentAvgAge(Group group);
    float calcStudentAvgMark(Group group);
    Student findbestStudentAvgAge(Group group);
	Student findworstStudentAvgAge(Group group);

};