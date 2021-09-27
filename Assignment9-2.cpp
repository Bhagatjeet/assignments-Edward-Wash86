#include <iostream>
#include <iomanip>

using namespace std;

void printArray(double* const n, int N);

double *ptr;

int main(){

  const int N = 10;
  double numbers[N] = {10.0, 15.2, 21.2, 10.5, 11.3, 12.51, 13.8, 14.7, 19.8, 20.0};
  // double *ptr;

  cout << "Memory addresses: " << endl;

  for(int i = 0; i < N; i++){
    ptr = &numbers[i];
    cout << "Element (" << i << ")is: " << ptr << endl; 
  }

  cout << endl;

  cout << "Element contents: " << endl;

  printArray(numbers, N);

  return 0;
}

void printArray(double numbers[], int N){
  for(int i = 0; i < N; i++){
    ptr = &numbers[i];
    cout << "The elemnt (" << i << ") of the array number contains ; " << *ptr  << endl;
  }
}