#include <iostream>
#include <vector>
#include <ctime>
#include "Assignment14-2.hpp" 


// Test build

using namespace std;






int main() {
  srand(time(NULL));

  vector <double> set1, set2,set3;
  for(int i = 0; i < 6; i++){
    set1.push_back((rand() % 100));
    set2.push_back((rand() % 100));
  }

  Student person1("bob",100093,set1);
  Student person2("Samuel", 10000565, set2);

  cout << endl;
  printStudent(person1);
  cout << endl;
  printStudent(person1);
  cout << endl;
  cout << "The largets score is " << largerTotalScore(person1 , person2) << endl;
  cout << endl;
  person1.getScore();
  cout << endl;
  person2.getScore();
  
} 