#ifndef COURSE_H
#define COURSE_H
using namespace std;

class Course
{
public:
	Course(const string& coursename, int capacity);
	~Course();
	string getCourseName() const;
	void addStudent(const string& name);
	void dropStudent(const string& name);
	string* getStudents() const;
	int getNumberOfStudents() const;
	int* doubleCapacity(const int* list, int size);
	void clear();


private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;
};
#endif