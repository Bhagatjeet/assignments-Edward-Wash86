#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  const int N = 10;
  double number[N] = {10.0, 15.2, 21.2, 10.5, 11.3, 12.51, 13.8, 14.7, 19.8, 20.0};
  double *ptr;

 //cout << "Memory addresses: " << endl;
  cout << endl;
  // ptr = number
  for(int i = 0; i < N; i++){
    ptr = number; // must be commnented out
    
	// this is fine, but array name is also pointer variable.
	// ptr = number; could be wokring fine, and it should move up outside for-loop.

	// and then,
	// ptr + i  shows the address of i_th element.
    //cout << ptr + i << endl;
    cout << "The MEMORY ADDRESS of element (" << i << ") is: " << &ptr[i] << endl; 
  }

  cout << endl;

  //cout << "Element contents: " << endl;

//   ptr = number; 
  for(int i = 0; i < N; i++){
    //ptr = number[i];
	// same as above.

    cout << "The element (" << i << ") of the array number contains ; " << ptr[i]  << endl;
	// 																	*(ptr+i)
  }

  // cout << "Data stored in the memory address: ";
  // cout << *number << endl; // Data stored in the memory address

  // cout << endl;
  
  // cout << "Memory address: ";
  // cout << &number << endl;

  // cout << "Pointer: ";
  // cout << ptr;

  return 0;
}