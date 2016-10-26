//////////////////////////
// Jalen Robinson-McClure
// CS 172-1
// October 25th, 2016
// EX04_05
/////////////////////////

#include <iostream>
#include "course.h"
using namespace std;

Course::Course(const string& coursename, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course:: ~Course()
{
	delete[] students;
}

string Course::getCourseName() const
{
	return courseName;
}

void Course::addStudent(const string& name)
{
	students[numberOfStudents] = name;
	numberOfStudents++;
}
// implemented drop student function
void Course::dropStudent(const string& name)
{
	students[numberOfStudents] = name;
	numberOfStudents--;
}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}
// increase capacity
int* Course :: doubleCapacity(const int* list, int size)
{
	if (size > 0)
	{
		int* newlist = new int[size * 2];
		for (int i = 0; i < size; i++)
		{
			newlist[i] = list[i];
		}

		delete list;

		return newlist;
	}
	else
	{
		return NULL;
	}
}
// clear course
void Course::clear()
{
	delete[] students;
}
