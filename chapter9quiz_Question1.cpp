#include <iostream>

/*
[1] Make the memory space for 10 integer elements
Requirements

Do not use any “global” variable.

In main function, create the integer pointer variable points to the memory space for 10 integer values. use the “new” operator to create the memory space.

In fillupArray function, generates 10 random integer values between 0 and 99 and assign them to each memory. 

Use the pointer variable that is passed as the parameter from the main function.

In printArray function, print all 10  integer values in the created memory space.
*/
int *fillupArray(int pickle );

void printArray(int *, int);

using namespace std;


int main() {
  
  const int size = 10;
  int *num = fillupArray(size);
  
  printArray(num, size);
}

int *fillupArray(int pickle){
  srand(time(0));
  int *cheese =  new int[pickle];
  for(int i = 0; i < pickle; i++){
    cheese[i] = rand() % 101;
  }
  return cheese;
}

void printArray(int *pickel, int max){
  for(int w = 0; w < max; w++){
    cout << pickel[w] << endl;
  }
}