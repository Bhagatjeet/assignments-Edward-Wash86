#include <iostream>

void makeArray(int array[], int);
void printArray(int array[], int);
void selectSort(int array[], int N);

using namespace std;

int main(){
  const int SIZE = 15;
  int theBank[SIZE];

  makeArray(theBank, SIZE);

  cout << "The data number placed into the arrary are: " << endl;
  for(int i = 0; i < SIZE; i++){
    cout << theBank[i] << " ";
  }

  selectSort(theBank, SIZE);
  cout << endl << endl;

  printArray(theBank, SIZE);
}

void makeArray(int array[], int N){
  for(int i = 0; i < N; i++){
    array[i] = rand() % 101;
  }
}

void printArray(int array[], int N ){
   cout << "The contents of the array have been sorted and placed in assending order: " << endl;
  for(int i = 0; i < N; i++){
     cout << array[i] << " ";
  }
}

void selectSort(int array[], int N){
  for(int i = 0; i < N - 1; i++){
    for(int j= 0; j < N -1; j++){
      if(array[j] > array[j + 1])
        swap(array[j], array[j + 1]);
    }
  }
}