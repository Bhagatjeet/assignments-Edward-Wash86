#include <iostream>

using namespace std;

int binarySearch(int [], int, int);

int main() {
  const int SIZE = 15; 
  int pool[] = {10, 25, 30, 35, 40, 45, 55, 60, 65, 70};
  int target;
  int results;

  cout << "What number would you like to search for? " << endl;
  cout << "Search for: "; cin >> target;

  

  results = binarySearch(pool, SIZE, target);

  if(results >= 0){
    cout << "The number " << target << " was found at index: " << results; 
  } else if(results == -1){
    cout << "number not found";
  }


  
  
}

int binarySearch(int splash[], int bubble, int pop){
  int notFound = -1;
  
// This is not a binary search. It is Linear Search
 // Need to implement the full code of binary search.
  
  for(int i = 0; i < bubble; i++){
    
    if(pop == splash[i]){
      return i;
    }
     
  }
  return notFound;
};
