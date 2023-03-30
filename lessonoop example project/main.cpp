#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;


	void clear() {
		name = "no name";
		surname = "no surname";
		age = 0;
		avg_mark = 0;

	}

	string convert() {
		string msg = "";
		msg += name;
		msg += " "+surname;
		msg += " ( age= "+ to_string(age);
		msg += ", avg_mark ="+ to_string(avg_mark)+ ")";
		return msg;
	}
};



int main() {

	Student st1;
	st1.name = "Ivan";
	st1.surname = "Ivanov";
	st1.age = 14;
	st1.avg_mark = 10;

	

	cout << "Before" << endl;
	cout << st1.convert() << endl;
	
	
	st1.clear();


	cout << "\nAfter" << endl;
	cout << st1.convert() << endl;
	



	
	return 0;
}