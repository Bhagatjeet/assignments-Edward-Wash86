//charper 14 - 1
#include "Student.hpp"
#include <iostream>
using namespace std;




int main(){

  double r[] = {1.1, 5.5, 90.3};
  double p[] = {56.23, 100.0, 85.6};
  double f[] = {89.1, 99.5, 16.0};

  Student s1("Miles", 1094784, p);

  Student s2("frank", 4637, r);

  Student s3("james", 6736627, f);


  cout <<  "Students name: "<< s2.getName() << endl;
  cout << "Student ID: " <<s2.getId() << endl;
  s2.getScores();

  

  cout << endl;

  cout <<  "Students name: "<< s1.getName() << endl;
  cout << "Student ID: " <<s1.getId() << endl;
  s1.getScores();

  cout << endl;

  cout <<  "Students name: "<< s3.getName() << endl;
  cout << "Student ID: " <<s3.getId() << endl;
  s3.getScores();

  cout << "===================================================================" << endl;

  cout << "Students in class: " << Student :: getNumStudent();
  cout << endl;
  cout << "Th Total sum on the scores is: " << Student :: getTotalSum();
}
