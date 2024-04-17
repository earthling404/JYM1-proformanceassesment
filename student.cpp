#include "student.h"


Student::Student() {
	string studentID = "";

	string firstName = "";

	string lastName = "";

	this.emailAddress = "";

	int age = 0;

	int daysInCourse[3] = new int[3];

	DegreeProgram degreeProgram = new DegreeProgram;
}
Student::~Student() {
	delete studentID;

	delete firstName;

	delete lastName;

	delete emailAddress;
	
	int age;

	delete daysInCourse;

	delete degreeProgram;
};
Student::setStudentID(string id) {
	this.studentID = id;
}
Student::getStudentID() {
	return this.studentID;
}
Student::setFirstName(string firstName) {
	this.firstName = firstName;
}
Student::getFristName() {
	return this.firstName;
}
Student::setLastName(string lastName) {
	this.lastName = lastName;
}
Student::getLastName() {
	return this.lastName;
}
Student::setEmailAddress(string emailAddress) {
	this.emailAddress = emailAddress;
}
Student::getEmailAddress() {
	return this.emailAddress;
}
Student::setAge(int age) {
	this.age = age;
}
Student::getAge() {
	return age;
}
Student::setDaysInCourse(int daysPerCourse[3]) {
	this.daysInCourse = daysPerCourse;
}
Student::getDaysInCourse() {
	return this.daysInCourse;
}
Student::setDegreeProgram(DegreeProgram degreeProgram) {
	this.degreeProgram = degreeProgram;
}
Student::getDegreeProgram() {
	return this.degreeProgram;
}