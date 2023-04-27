#include "student.h"


//constructor with no arguments or default constructor
Student::Student() {
	name = "no name";
	surname = "no surname";
	age = 15;
	avg_mark = 4;
}

//constructor with arguments
Student::Student(string nm, string surnm, int a, float avg) {
	cout << "constructor with arguments" << endl;
	name = nm;
	surname = surnm;
	age = a;
	avg_mark = avg;
}


Student::Student(string nm, string surnm) {
	cout << "constructor with arguments" << endl;
	name = nm;
	surname = surnm;
	age = 15;
	avg_mark = 4;
}

//copy constructr
Student::Student(const Student& st) {
	cout << "copy constructur" << endl;
	name = st.name;
	surname = st.surname;
	age = st.age;
	avg_mark = st.avg_mark;
}

Student::~Student() {
	cout << "destructor" << endl;
}

string Student::getName() {
	return name;
}

void Student::setName(string n) {
	name = n;
}


string Student::getSurname() {
	return name;
}

void Student::setSurname(string n) {
	surname = n;
}
int Student::getAge() {
	return age;
}

void Student::setAge(int a) {
	if (a > 0 && a < 100) {
		age = a;

	}
}
float Student::getAvgmark() {
	return avg_mark;
}

void Student::setAvgmark(float m) {
	if (m >= 0 && m <= 10) {
		avg_mark = m;
	}
}


void Student::clear() {
	name = "no name";
	surname = "no surname";
	age = 0;
	avg_mark = 0;

}

string Student::convert() {
	string msg = "";
	msg += name;
	msg += " " + surname;
	msg += " ( age= " + to_string(age);
	msg += ", avg_mark =" + to_string(avg_mark) + ")";
	return msg;
}
