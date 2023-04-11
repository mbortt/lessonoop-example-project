#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;

	//constructor with no arguments or default constructor
	Student() {
		name = "no name";
		surname = "no surname";
		age = 15;
		avg_mark = 4;
	}

	//constructor with arguments
	Student(string nm,string surnm, int a, float avg) {
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
	Student( const Student & st) {
		cout << "copy constructur" << endl;
		name = st.name;
		surname = st.surname;
		age = st.age;
		avg_mark = st.avg_mark ;
	}

	~Student() {
		cout << "destructor" << endl;
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



int main() {

	/*Student st1;*/
	Student st2("Ivan", "Ivanov", 14, 10);
	/*Student st3("Dima", "Spot");*/
	Student st4 = st2, st5=st2, st6=st2;


	/*cout << st1.convert() << endl;*/
	cout << st2.convert() << endl;
	/*cout << st3.convert() << endl;*/
	cout << st4.convert() << endl;


	/*st1.name = "ivan";
	st1.surname = "ivanov";
	st1.age = 14;
	st1.avg_mark = 10;*/






	return 0;
}