#pragma once
#include "group.h"

class Manager {
public:

	static	float calcStudentAvgAge(Group group);
	static float calcStudentAvgMark(Group group);
	static Student findBestStudent(Group group);
	static	Student findWorstStudent(Group group);

};