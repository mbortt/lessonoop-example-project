#include "manager.h"



int main() {
	Student s1("Ivan", "Ivanov", 14, 7.6);
	Student s2("Alex", "Invisible", 15, 10);
	Student s3("Peter", "Pen", 12, 4);
	Student s4("Garry", "Potter", 14, 9.6);
	Student s5("Alice", "Inder", 13, 8);



	Group group;
	group.add(s1);
	group.add(s2);
	group.add(s3);
	group.add(s4);
	group.add(s5);

	Manager manager;

	cout << "Group average age: " << manager.calcStudentAvgAge(group) << endl;
	cout << "Group average mark: " << manager.calcStudentAvgMark(group) << endl;
	Student s = manager.findBestStudent(group);
	cout << "Best group student is: " << s.convert()<<endl;
	s = manager.findWorstStudent(group);
	cout << "Worst group student is: " << s.convert() << endl;

	return 0;
}