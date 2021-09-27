/*
Make a program that manages the double type values
(1) The function makeNumbers
      generate 10 double random numbers and store them into the memory that is dynamically allocated by the "new".
(2) The function sortNumbers
       sort the double numbers that are generated in the function makeNumbers
(3) the function printNumbers
      print all numbers in the dynamically allocated memory space.
the first number is pointed by the double-type pointer from the function makeNumbers
(4) the function deleteNumbers
      release all memory space for the numbers to re-use it by the operating system

REQUIRMENRS:
1.do not use and array, use dymanic memory allocation and pointers.

2.at the end of main call the delete number function.

3.all other peramiters and return values can be determined by the programmer.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void deleteNumbers(double *);
int main(){
  int size = 10;
  double *ptr;
  srand(time(0));

  cout << "DMA has be completed using the follwing statment:(ptr = new int[size];)" << endl;

  cout << endl;

  ptr = new double[size];

  
  for(int i = 0; i < size; i++){
    for(int i = 0; i < size; i++){
      ptr[i] = (rand() % 101) * .3;
    }
  }

  //cout << "Memory used: " << malloc(ptr[1]) << endl;

  for(int i = 0; i < size; i++){
    cout << "Element (" << i << ") holds the value " << ptr[i] << "    " << " Address: " << &ptr[i] << endl;
  } 

  
  deleteNumbers(ptr);
  ptr = NULL;
  
  cout << "Memory used: " << sizeof(ptr[0]) << endl;

  cout << endl;
  
  
  
  


 return 0;
}

void deleteNumbers(double *ptr){
  delete[]ptr;
}