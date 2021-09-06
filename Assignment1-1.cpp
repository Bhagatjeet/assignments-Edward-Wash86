/*
Create a structure type "student".
Read the text file "students.txt" and then fill up the struct "Studnets".
Make a function "findstudnet" to find the particular record with the "id".
if we give the is ""10009, show all the information about the studnet "Mike" including the total scores and average.
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct students {
 int id;
 string name;
 int score1, score2;
 float scoreavg;
};

void findstudnets(int);

int main() {
  fstream newfile;

  students firstclass[10];

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
    
    firstclass[i].scoreavg = (static_cast<double>(firstclass[i].score2) + static_cast<double>(firstclass[i].score1)) / 2;

    }
  }

  newfile.close();

  for(int i = 0; i < 0; i++){
    
  }


}

// void findstudnets(int id){

// }