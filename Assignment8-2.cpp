#include <iostream>
#include <ctime>

using namespace std;

const int N = 64;

void makeArray(int array[], int);

int linearSearch(int array[], int , int);

int binarySarch(int array[] , int, int);

void sortArray(int array[], int N);

int main(){
  srand(time(0));
  
  int target;
  int pool[N];
  for(int e = 0; e <= 100; e++){
    cout << "Search Task: " << e << endl;
    makeArray(pool, N);
    
    cout << "Unsorted array: " << endl;
    for(int i = 0; i < N; i++){
      cout << pool[i] << " ";
    }
    cout << endl;
    cout << endl;

    sortArray(pool,N);
    cout << "Sorted array: " << endl;
    for(int i = 0; i < N; i++){
      cout << pool[i] << " ";
    }

    cout << endl;
    cout << endl;
    
    target = rand() % 101;

    cout << "Searching for number: " << target << endl;
    cout << endl;

    int linearResults = linearSearch(pool, N, target);
    int binaryResults = binarySarch(pool, N, target);

    cout << endl;

    cout << "linear search result: " << linearResults << endl;
    cout << "Binary search results: " << binaryResults << endl;

    cout << endl;
    cout << "===============================================" << endl;
    cout << endl;
    
  }

  return 0;
}

// fill 64 elements array with numbers 1 through 100
void makeArray(int array[], int N){
  for(int i = 0; i < N; i++){
    array[i] = rand() % 101;
  }
}


// return value = the number of comparisons that was used to find the target;
int linearSearch(int array[], int N, int target){
  int found = -1;
  for(int i = 0; i < N; i++){
    if(target == array[i]){
      cout << "LINEAR SEARCH has been found the value " << target << " in element " << i << "!" << endl << endl; 
      found = 1;
    }
    
  }
  
  return found;
} 


// return value = the number of comparisons that was used to find the target;
int binarySarch(int array[], int N, int target){
  bool found = false;
  int first = 0;
  int mid = 0;
  int last = N;
  int result;

  while(first <= last && !found){
    mid = (first + last) / 2;

    if(target > array[mid]){
      first = mid + 1;
    }
    else if(target < array[mid]){
      last = mid - 1;
    }
    else {
      cout << "BINARY SEARCH has found the value " << target << " in element "<< mid << "!"<< endl;
      found = true;
      result = 1;
    }
  } 

  if(!found){
    result = -1;
    cout << "The value " << target << " was not found." << endl;
  }

  return result;
}


void sortArray(int array[], int N){
  //Sorts the array in acending order.
  for(int j = 0; j < N; j++){
    for(int i = 0; i < N - 1; i++){
      if(array[i] > array[i +1]){
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
// binary search should be called after stortArray because the array must be sorted in binary search.

//make a for loop to run 100 times to call each search with the target
//              target value should be selected in the array randomly.
//                
