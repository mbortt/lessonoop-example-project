#pragma once
#include "main.h"


class Student {
private:
	string name;
	string surname;
	int age;
	float avg_mark;

public:
	//constructor with no arguments or default constructor
	Student();

	//constructor with arguments
	Student(string nm, string surnm, int a, float avg);


	Student(string nm, string surnm);

	//copy constructr
	Student(const Student& st);
	~Student();

	string getName();

	void setName(string n);


	string getSurname();

	void setSurname(string n);
	int getAge();

	void setAge(int a);
	float getAvgmark();

	void setAvgmark(float m);


	void clear();
   string convert();
};
