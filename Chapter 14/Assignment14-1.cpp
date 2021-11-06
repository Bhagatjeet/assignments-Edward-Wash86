//charper 14 - 1
#include "Student.hpp"
#include <iostream>
using namespace std;




int main(){

  Student s1;

  // cout << s1.getName();
  // cout << s1.getId();
  // s1.getScores();

  double r[] = {45.6, 76.87, 567.56}; 

  Student s2("frank", 4637, r);

  cout << s2.getName() << endl;
  cout << s2.getId() << endl;
  s2.getScores();

  cout << "Students in class: " << Student :: getNumStudent();
  
}
