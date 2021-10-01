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
#include <vector>
#include <ctime>

using namespace std;

//vector <double> makeArray();

double &makeArray();
void printArray(double *);
void sortArray(double *);

int main(){
  double *bank = &makeArray();
  sortArray(bank);
  printArray(bank);
  
  //cout << *bank << " ";
}

double &makeArray(){
  srand((0));
  static double numbers[10];
  for(int i = 0; i < 10; i++){
    numbers[i] = rand() % 101 * .3;
  }

  for(int i = 0; i < 10; i++){
    return numbers[i];
  }
  
}

void printArray(double *num){
  for(int i = 0; i < 10; i++){
    cout << num[i] << " ";
  }
}

void sortArray(double *num){
  for(int i = 0; i < 10 - 1; i++){
    for(int j = 0; j < 10 -1; j++){
      if(num[j] > num[j + 1])
        swap(num[j], num[j + 1]);
    }
  }
}