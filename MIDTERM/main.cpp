#include <iostream>
#include "Numbers.hpp"

using namespace std;

int NumClass::NumberOfObjects = 0;
static int POS;

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

  cout << "Total Number of Objects: " << adriana.getNumberOfObjects() << endl;

  cout << "======================================================" << endl;
  cout << endl;
} 