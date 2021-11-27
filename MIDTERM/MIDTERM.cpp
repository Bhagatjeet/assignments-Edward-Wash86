#include <iostream>
#include "numbers.hpp"
#include "Student.hpp"
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int NumClass::NumberOfOjgects = 0;
static int POS;

const int N = 10;

void operator>>(fstream& IMPORT, Student& array){
  
  
  IMPORT.open("CourseStudents.txt", ios:: in);
  
  int sid;
  string name;
  double temp;
  vector <double> scores;
  
  
  
    IMPORT >> sid;
    IMPORT >> name;
    for(int i = 0; i < 3; i++){
      IMPORT >> temp;
      scores.push_back(temp);
    }

    for(int i = 0; i < N; i++){
      array.setScore();
    }
  
    
  
  IMPORT.close();

    
  
  

}

int main() {
  cout << "Question 1: " << endl;

  cout << endl;
  
  NumClass edward(4,10);
  cout << endl;

  NumClass adriana(1,15);
  

  //edward.printVector();
  printNumbers(edward);
  cout << endl;
  cout << endl;
  printNumbers(adriana);

  cout << endl;
  cout << endl;

  int ben = edward > adriana;

  cout << "Result: " << ben << endl;

  edward.getNumberOfObjects();

  cout << "======================================================" << endl;
  cout << endl;

  cout << "Question 2: " << endl;

  Student person[N];

  fstream import;

  import.open("Students.txt", ios :: in);

  cout << endl;

  if(import){
    cout << "File access, Successful!" << endl;
  } else cout << "Failed to open file." << endl;

  int ID;
  string name;
  double test;
  vector <double> scores;

  while(!import.eof()){
    import >> ID;
    import >> name;
    
    for(int i = 0; i < 3; i++){
      import >> test;
      scores.push_back(test);
    }

    for(int i = 0; i < N; i++){
      person(ID,name,scores);
    }

  }


  
} 