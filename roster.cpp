#include "roster.h"
const int sizeOfStudentPtr = sizeOf(*Student);
Roster::add(
	string studentID,
	string firstName,
	string lastName,
	string emailAddress,
	int age,
	int daysInCourse1,
	int daysInCourse2,
	int daysInCourse3,
	DegreeProgram degreeProgram) {
	int sizeOfNewClassRosterArray = (sizeof(classRosterArray)/sizeOfStudentPtr) + 1;
	this.classRosterArray = new * Student[sizeOfNewClassRosterArray];
	int *daysInCourse[] = { daysInCourse1, daysInCourse2, daysInCourse3 };
	Student *studentToAdd = *(
		Student(
			studentID,
			firstName,
			lastName,
			emailAddress,
			age,
			daysInCourse,
			degreeProgram))
		this.classRosterArray[sizeOfNewClassRosterArray - 1] = studentToAdd;

}