//////////////////////////
// Jalen Robinson-McClure
// CS 172-1
// October 25th, 2016
// EX04_05
/////////////////////////

#include <iostream>
#include <string>
#include "course.h"
using namespace std;

// test program
int main()
{
	//name of course
	Course course1("Computer Science 2", 10);

	// add students
	course1.addStudent("Jalen");
	course1.addStudent("James");
	course1.addStudent("Josh");

	// drop students
	course1.dropStudent("James");

	// display number of students
	cout << "Number of students in Computer Science: "  << course1.getNumberOfStudents() << endl;
	string* students = course1.getStudents();

	// display names
	for (int i = 0; i < course1.getNumberOfStudents; i++)
	{
		cout << students[i] << ", " << endl;
	}
}