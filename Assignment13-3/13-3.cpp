//definiation - member functions
//class type member function -  is a class with in a class( class as a variable).
/*
constuctor implmentation:
  member fiunction:
    Student :: Student() : sname("nonman"), id(0), dob(1,1){
    }
    Student :: Student(string stname, int idnum, dob date) : sname(stname), id(date)
  
    When we create an object of the class student, we need to have one object of the class "DOB" to assign to the member data "dob" of "Student".

    sting sname = "john";
    int idnum = 10000001;
    DOB data(12,24); - need to create an "DOB instance, prior to creating "student".
    Student s (sname, idrum, date);

  class type member variables:
    Getting the data in t he class:
      In order to get the data value for trhe class DOB, we neet to declare the "DOB" variable.

      once we get the DOB value by using the getDOB() from the class "Student", we are able to use the member fucntion of the class DOB such as "printDate()".

      cout << "Student Name: " << s.getsName() << endl;
      cout << "Studnets ID: " << s.getID() << << endl;
      date = s.getgetDOB();
      date.printDate();

*/

#include "student.hpp"
#include <iostream>
#include <fstream>
using namespace std;

void printStudent(Student &s);
int main()
{
	ifstream ifs;
	const int N = 10;
	string sname;
	int idnum, month, day;
	DOB date;
	Student s[10];

	ifs.open("studentsDOB.txt");
	if (ifs.fail())
	{
		cerr << " File not open\n";
		exit(0);
	}
	int i = 0;
	while (ifs >> sname >> idnum >> month >> day)
	{
		date.setDOB(month, day);
		s[i].setSname(sname);
		s[i].setID(idnum);
		s[i].setDOB(date);
		i++;
	}

	for (int i = 0; i < N; i++)
	{
		printStudent(s[i]);
	}
}

void printStudent(Student &s)
{
	DOB date;
	cout << "Student Name: " << s.getSname() << endl;
	cout << "Student ID: " << s.getID() << endl;
	date = s.getDOB();
	date.printDate();
}