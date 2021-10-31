//Declaration - .hpp file
#ifndef STUDENTS_H
#define STUDENTS_H

#include <string>

using namespace std;

class Students{
  -int sid;
  -stringsname;
  -DOB dob;
  +Student();
  +Student(n: string, id: int, dob: DOB);
  +getID const: int;
  +getsSname() const: string;
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