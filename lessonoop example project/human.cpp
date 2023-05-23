#include "human.h"

using namespace std;


// default constructor
Human::Human() {
	cout << "Human default constructor" << endl;
	//cout << "default constructor" << endl;
	name = "no name";
	surname = "no surname";
	age = 15;

}

// constructor with arguments
Human::Human(string name, string surname, int age) {
	
	//cout << "constructor with arguments" << endl;
    this->name = name;
	this->surname = surname;
	this->age = age;

}

Human::~Human() {

	//cout << "destructor" << endl;
}

string Human::getName() {
	return name;
}

void Human::setName(string name) {
	this->name = name;
}

string Human::getSurname() {
	return surname;
}

void Human::setSurname(string surname) {
	this->surname = surname;
}

int Human::getAge() {
	return age;
}

void Human::setAge(int a) {
	if (a > 0 && a < 110) {
		this->age = age;
	}
}


string Human::convert() {
	string msg = "";
	msg += name;
	msg += " " + surname;
	msg += " ( age = " + to_string(age);
	msg += ", average mark = " + to_string(avg_mark);
	msg += ")";
	return msg;
}
