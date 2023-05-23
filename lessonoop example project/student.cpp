#include "student.h"



int Student::count = 0;

int Student::getCount() {
	return count;
}

// default constructor
Student::Student() : Human() {
	cout << "student default constructor" << endl; 
	count++;
	//cout << "default constructor" << endl;
	
	avg_mark = 4;
}

// constructor with arguments
Student::Student(string name, string surname, int age, float mark) : Human(name, surname,age)
{
	count++;
	
	avg_mark = mark;
}

Student::~Student() {

	//cout << "destructor" << endl;
}

float Student::getAvgMark() {
	return avg_mark;
}

void Student::setAvgMark(float mark) {
	if (mark >= 0 && mark <= 10) {
		avg_mark = mark;
	}
}
