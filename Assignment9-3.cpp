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
#include <iomanip>

using namespace std;

void deleteNumbers(double *);
double makeArray(double *, int);
void sortNumbers(double *, int);
void printNumbers(double [], int);

int main(){
  srand(time(0));
  
  int size = 10;
  double *ptr;
  
  cout << "DMA has be completed using the follwing statment:(ptr = new int[size];)" << endl;

  cout << endl;

  makeArray(ptr, size);

  //sortNumbers(ptr, size);

 
  //printNumbers(ptr, size);

      cout << (ptr + 8) << " ";
  
  

  
  //deleteNumbers(ptr);
  //ptr = NULL;
  
  //cout << "Memory used: " << sizeof(ptr[0]) << endl;

  cout << endl;
  
  
  

 return 0;
}

void deleteNumbers(double *ptr){
  delete ptr;
  delete[] ptr;
}

double makeArray(double *bank, int size){
  bank = new double [size];

    for(int i = 0; i < size; i++){
      bank[i] = rand() % 101 * .03;
      
    }
}

void sortNumbers(double *bank, int size){
  for(int i = 0; i < size - 1; i++){
    for(int j = 0; j < size -1; j++){
      if(bank[j] > bank[j + 1])
        swap(bank[j], bank[j + 1]);
    }
  }
}

void printNumbers(double ptr[], int size){
  for(int i = 0; i < size; i++){
    //cout << setprecision(3) << endl;
    cout << "The address of element (" << i << ") is " << &ptr[i] << " and holds the value " << ptr[i] << endl << endl;
  } 
}