#include <iostream>
#include "numbers.hpp"
#include <vector>

using namespace std;

int NumClass::NumberOfOjgects = 0;

int main() {
  cout << "Hello Midterm\n";
  
  cout << endl;
  
  NumClass edward(4,10);
  cout << endl;

  NumClass adriana;
  

  //edward.printVector();
  printNumbers(edward);
  cout << endl;
  printNumbers(adriana);

  cout << endl;

  int ben = edward > adriana;

  edward.getNumberOfObjects();
} 