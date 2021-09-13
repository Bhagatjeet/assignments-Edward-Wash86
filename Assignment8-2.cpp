#include <iostream>

using namespace std;

const int N = 64;

void makeArray(int, int);

int linearSearch(int array, int N, int target);

int binarySarch(int array, int N, int target);

void stortArray(int array[], int N);

int main(){


  int target;
  int pool[] = {10, 25, 30, 35, 40, 45, 55, 60, 65, 70}

  



  return 0;
}

void makeArray(int array[], int N); 
// fill 64 elements array with numbers 1 through 100

int linearSearch(int array, int N, int target); 
// return value = the number of comparisons that was used to find the target;

int binarySarch(int array, int N, int target);
// return value = the number of comparisons that was used to find the target;

void stortArray(int pool[], int N){
  //Sorts the array in acending order.
  for(int j = 0; j < SIZE; j++){
    for(int i = 0; i < SIZE - 1; i++){
      if(pool[i] > pool[i +1]){
        int temp = pool[i];
        pool[i] = pool[i + 1];
        pool[i + 1] = temp;
      }
    }
  }
}
// binary search should be called after stortArray because the array must be sorted in binary search.

//make a for loop to run 100 times to call each search with trhe target
//              target value should be selected in the array randomly.
//                
