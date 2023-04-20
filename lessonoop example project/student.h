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
	Student() {
		name = "no name";
		surname = "no surname";
		age = 15;
		avg_mark = 4;
	}

	//constructor with arguments
	Student(string nm, string surnm, int a, float avg) {
		cout << "constructor with arguments" << endl;
		name = nm;
		surname = surnm;
		age = a;
		avg_mark = avg;
	}


	Student(string nm, string surnm) {
		cout << "constructor with arguments" << endl;
		name = nm;
		surname = surnm;
		age = 15;
		avg_mark = 4;
	}

	//copy constructr
	Student(const Student& st) {
		cout << "copy constructur" << endl;
		name = st.name;
		surname = st.surname;
		age = st.age;
		avg_mark = st.avg_mark;
	}

	~Student() {
		cout << "destructor" << endl;
	}

	string getName() {
		return name;
	}

	void setName(string n) {
		name = n;
	}


	string getSurname() {
		return name;
	}

	void setSurname(string n) {
		surname = n;
	}
	int getAge() {
		return age;
	}

	void setAge(int a) {
		if (a > 0 && a < 100) {
			age = a;

		}
	}
	float getAvgmark() {
		return avg_mark;
	}

	void setAvgmark(float m){
		if (m >= 0 && m <= 10) {
			avg_mark = m;
	}
	}


	void clear() {
		name = "no name";
		surname = "no surname";
		age = 0;
		avg_mark = 0;

	}

	string convert() {
		string msg = "";
		msg += name;
		msg += " " + surname;
		msg += " ( age= " + to_string(age);
		msg += ", avg_mark =" + to_string(avg_mark) + ")";
		return msg;
	}
};
