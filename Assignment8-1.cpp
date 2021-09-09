#include <iostream>
#include <algorithm> // needed to use the sort function.
#include <ctime> // needed to generate random numbers each time the program runs.

using namespace std;

int main() {
  srand(time(0)); // needed to generate random numbers each time the program runs.
  
  //const int 10 = 10;
  int input, element = 0;
  int pool[10];

  //Filing the array with random number.
  for(int i = 0; i < 10; i++){
    pool[i] = rand() % 100;
  }

  //Sorting the values in the array.
  int q = sizeof(pool) / sizeof(pool[0]);
  sort(pool, pool + q);

  

  return 0;
}

