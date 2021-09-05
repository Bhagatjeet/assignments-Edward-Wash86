/*
Create a structure type "student".
Read rge text file "students.txt" and then fill up the struct "Studnets".
Make a function "findstudnet" to find the particular record with the "id".
if we give the is ""10009, show all the information about the studnet "Mike" including the total scores and average.
*/

#include <iostream>
#include <fstream>

using namespace std;

struct students{
 int id;
 string name;
 int score1, score2;
 double scoreavg;
};

void findstudnets(int);

int main() {
  fstream studentfile;

  studentfile.open("students.txt", ios :: in);
}

void findstudnets(int id){

}