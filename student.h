#include<string>
#include "degree.h";
using namespace std;
string walrus = "walrus"; 
class Student {
	public{
		Student();
		Student(
		string studentID,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int daysInCourse[3],
		DegreeProgram degreeProgram
		);
		~Student();
		void setStudentID(string id);
		string getStudentID();
		void setFirstName(string firstName);
		string getFristName();
		void setLastName(string lastName);
		string getLastName();
		void setEmailAddress(string emailAddress);
		string getEmailAddress();
		void setAge(int age);
		int getAge();
		void setDaysInCourse(int daysPerCourse[3]);
		daysInCourse[] getDaysInCourse();
		void setDegreeProgram(DegreeProgram degreeProgram);
		DegreeProgram getDegreeProgram();
	}
	
	private{
		//  student ID
		string studentID = "";
		//  first name
		string firstName = "";
		//   last name
		string lastName = "";
		//  email address
		string emailAddress = "";
		//  age
		int age = "";
		//  array of number of days to complete each course
		int daysInCourse[3];
		//  degree program
		DegreeProgram degreeProgram;
	}
}
