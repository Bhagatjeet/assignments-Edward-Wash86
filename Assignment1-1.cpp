/*
Create a structure type "student".
Read the text file "students.txt" and then fill up the struct "Studnets".
Make a function "findstudnet" to find the particular record with the "id".
if we give the is 10009, show all the information about the studnet "Mike" including the total scores and average.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct students {
 int id;
 string name;
 int score1 = 0, score2 = 0;
 float scoreavg;
};

void findstudnets(int);
void printfile(students &);

int main() {
  fstream newfile;

  students firstclass[10];
  int input;

   

  do{
    cout << "Menu:" << endl;
    cout << "1. Search" << endl;
    cout << "2. print file" << endl;
    cin >> input;

    switch(input){
    case 1: newfile.open("students.txt", ios:: in);
      if(newfile){
      cout << "File has been opened" << endl;
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
      // for(int i = 0; i < sizeof(newfile); i++){
      //   firstclass[i].scoreavg = (static_cast<double>(firstclass[i].score1) + static_cast<double>(firstclass[i].score2)) / 2;
      // }

      cout << "Please enter a student ID: " << endl;
      cin >> input;
      for(int i = 0; i < sizeof(newfile); i++){
      if(input == firstclass[i].id){
        cout << "Student information found" << endl;
        cout << "Student Number: " << "Student Name: " << "First Score: " << "Second Score: " << "Score Average: " << endl;
        cout << firstclass[i].id << setw(11)<< " " << firstclass[i].name << setw(11)<<  " " << firstclass[i].score1 << setw(13)<< " " << firstclass[i].score2 << setw(13)<< " " <<  firstclass[i].scoreavg;
      }
    }
    
    break;
    case 2: for(int i = 0; i < sizeof(newfile); i++ ){

    }
  }

  } while(input != 0);

  


}

// void printfile(students s[]){
//   for(int i = 0; i < 10; i++){
//     cout << s[i].id << " " << s[i].name << " " << s[i].score1  << " "<< s[i].score2 << " " << s[i].scoreavg;
//     cout << endl;
//   }
// }

// void findstudnets(int id){

// }