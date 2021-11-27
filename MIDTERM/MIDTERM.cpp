#include <iostream>
#include "numbers.hpp"
#include "Student.hpp"
#include <vector>
#include <fstream>

using namespace std;

int NumClass::NumberOfOjgects = 0;

const int N = 10;



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

  Student group[N];

  fstream import;

  import.open("Students.txt", ios :: in);

  cout << endl;

  if(import){
    cout << "File access, Successful!" << endl;
  } else cout << "Failed to open file." << endl;

  
} 