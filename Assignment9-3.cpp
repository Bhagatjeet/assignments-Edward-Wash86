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
1.do not use an array, use dymanic memory allocation and pointers.

2.at the end of main call the delete number function.

3.all other peramiters and return values can be determined by the programmer.
*/

#include <iostream>
#include <ctime>
using namespace std;

double *makeArray(int bunch );
void printArray(double *, int);
void sortArray(double *, int);
void deleteArray(double *);

int main(){
  const int bunch = 10;
  double *market = makeArray(bunch);
  
  printArray(market, bunch);
  sortArray(market, bunch);
  printArray(market, bunch);
  deleteArray(market);

}

double *makeArray(int bunch){
  srand(time(0));
  double *apple =  new double[bunch];
  for(int i = 0; i < bunch; i++){
    apple[i] = rand() % 101 * .7;
  }
  return apple;
}

void printArray(double * print, int size){
  for(int i = 0; i < size; i++){
    cout << print[i] << " ";
  }

  cout << endl;
}

void sortArray(double *array, int size){
  for(int i = 0; i < size - 1; i++){
    for(int j = 0; j < size -1; j++){
      if(array[j] > array[j + 1])
        swap(array[j], array[j + 1]);
    }
  }
}

void deleteArray(double *array){
  delete array;
}