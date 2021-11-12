#include <iostream>
#include "Assignment14-3.hpp"
#include <iostream>

using namespace std;

int main() {

  Square ana;
  Rectangle kim;

  ana.setWidth(8); 

  kim = kim.makeRectanglewithSquare(ana);

  cout << kim.getWidth() << endl;
  cout << kim.getHeight()<< endl;
} 