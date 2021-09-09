#include <iostream>
#include <algorithm> // needed to use the sort function.
#include <ctime> // needed to generate random numbers each time the program runs.

using namespace std;

int main() {
  srand(time(0)); // needed to generate random numbers each time the program runs.
  
  //const int 10 = 10;
  int input, element = 0;
  int pool[10];

  //Filing the array with random number.
  for(int i = 0; i < 10; i++){
    pool[i] = rand() % 100;
  }

  //Sorting the values in the array.
  int q = sizeof(pool) / sizeof(pool[0]);
  sort(pool, pool + q);

  cout << "The pool array consisting of " << sizeof(pool) << " elements has been populated and sorted." << endl;
  
  cout << endl;

  for(int i = 0; i < 10; i++){
    cout << pool[i] << " ";
  }

  cout << endl << endl;
  
  //Binary search
  int first = pool[0];
  int last = 10 - 1;
  bool status = true, found = false;
  
  // Will loop until the user enter a valid digit.
  while(status){
    //Getting input from user.
    cout << "Please enter a number you wish to find: ";
    cin >> input;

    cout << endl;
    while(first < last){
      int mid = (first + last) / 2;
      if(pool[mid] == input)
        cout << "Your number has been found!" << endl;
      if(pool[mid] < input)
        first = mid + 1;
      if(pool[mid] > input)
        last = mid - 1;
    }
    
    //Giving the user hits to select a number that has been stored within the array.
    if(input < pool[0]){
      cout << "Your number is too small.";
      cout << endl << endl;
      continue;
    }
    else if(input > pool[10 - 1]){
      cout << "Your number is too large.";
      cout << endl << endl;
      continue;
    }

    //Found number notification.
    for(int i = 0; i < sizeof(pool); i++){
      if(input == pool[i]){
        element = pool[i]; 
        status = false;
        found = true;
      }
    }

  } 

  

    if(found){
      cout << endl;
      cout << "The number " << element <<  " has been found." << endl;
    }


  return 0;
}

