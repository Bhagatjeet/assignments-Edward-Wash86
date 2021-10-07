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
 double score[3];
 double scoreavg;
};

void printArray(students*,int);

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
      newfile >> (firstclass + i).id;

      newfile >> (firstclass + i).name;

      for(int j = 0; j < 3;j++){
        newfile >> (firstclass + 1).(score + j);
      }
      
    } 
    newfile.close();
  } 

  if(!newfile){
    cout << "File has been closed" << endl;
    cout << endl;
  }

  printArray(firstclass,10);



}

void printArray(students * print, int size){
  for(int i = 0; i < size; i++){
    cout << (print + i).id << " ";
    cout << (print + i).name << " ";
    for(int j = 0; j < 3;j++){
      cout << (print + i).(score + j) << " ";
    }
    cout << endl;
  }

  cout << endl;
}