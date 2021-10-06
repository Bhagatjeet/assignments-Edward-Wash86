/*
Make the program that manages the students information
Read the 10 student's information from the text file "students.txt"
Save the information to the struct "Student"
The struct data should be dynamically allocated and pointed  by a pointer variable
Print all studnet's information using the pointer variable
Sort the student's information with the ascending order of score summation
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct students {
 int id, sum;
 string name;
 double score1,score2;
 double scoreavg;
};

int main() {
  
  fstream newfile;

  students *firstclass;
  firstclass = new students[10];
  int input;
  
  newfile.open("students.txt", ios:: in);

  if(newfile){
    cout << "File has been opened and read." << endl;
  }

  while(!newfile.eof()){
    for(int i = 0; i < sizeof(newfile); i++){
      newfile >> firstclass[i].id;

      newfile >> firstclass[i].name;

      newfile >> firstclass[i].score1;

      newfile >> firstclass[i].score2;
      
    } 
    newfile.close();
  } 

  if(!newfile){
    cout << "File has been closed" << endl;
  }

  



}