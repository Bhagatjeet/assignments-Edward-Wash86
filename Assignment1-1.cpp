/*
Create a structure type "student".
Read the text file "students.txt" and then fill up the struct "Studnets".
Make a function "findstudnet" to find the particular record with the "id".
if we give the is ""10009, show all the information about the studnet "Mike" including the total scores and average.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct students {
 int id;
 string name;
 double score1,score2;
 double scoreavg;
};

void findstudnets(int);
void printfile(students &);

int main() {
  fstream newfile;

  students firstclass[10];
  int input;
  
  newfile.open("students.txt", ios:: in);

  if(newfile){
    cout << "File has been opened" << endl;
  }

  while(!newfile.eof()){
    for(int i = 0; i < sizeof(newfile); i++){
      newfile >> firstclass[i].id;

      newfile >> firstclass[i].name;

      newfile >> firstclass[i].score1;

      newfile >> firstclass[i].score2;
      
      //firstclass[i].scoreavg = (static_cast<double>(firstclass[i].score2) + static_cast<double>(firstclass[i].score1)) / 2;
    } 
    newfile.close();
  } 


  for(int i = 0; i < 10; i++){
    firstclass[i].scoreavg = (firstclass[i].score1 + firstclass[i].score2) / 2;
    
  }

  while(input != 0){
    cout << "Please enter a student ID or enter ZERO to quit." << endl;
    cin >> input;
    for(int i = 0; i < 10; i++){
      if(input == firstclass[i].id){
        cout << "Student information found" << endl;
        cout << endl;
        cout << "Student Number: " << "Student Name: " << "First Score: " << "Second Score: " << "Score Average: " << endl;
        cout << firstclass[i].id << setw(11)<< " " << firstclass[i].name << setw(10)<<  " " << firstclass[i].score1 << setw(10)<< " " << firstclass[i].score2 << setw(12)<< " " <<  firstclass[i].scoreavg;
        cout << endl;
        cout << endl;
      }
    }
  }
}

  