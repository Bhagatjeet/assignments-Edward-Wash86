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

#include "13-3.hpp"

#include <string>

using namespace std;

class Students{
  -int sid;
  -string sname;
  -DOB dob;
  +Student(): sname("noname"), id(0), dob(1,1){
  };
  +Student(n: string, id: int, dob: DOB) : sname(stname), id(idnum), dob(date){

  }
  +getID const: int{
    return
  };
  +getSname() const: string;
  +getDOB() const: DOB
  +setSname(name: string): void
  +setID(id int) : void
  +setDOB(dob DOB) : void
}

class DOB{
  -int month;
  -int day;
  +DOB();
  +DOB(int m, int d):
  +getMonth() const: int;
  +getDay() const: int;
  +printDate() const: void
  +setDOB(dob: DOB) : void
  +setMonth(m: int) : void
  +setDay(d: int) : void
}

#endif