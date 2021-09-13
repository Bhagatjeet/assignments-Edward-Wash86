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

  makeArray(pool, N);
  for(int i = 0; i < N; i++){
    cout << pool[i] << " ";
  }
  cout << endl;
  cout << endl;

  sortArray(pool,N);



  for(int i = 0; i < N; i++){
    cout << pool[i] << " ";
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
int linearSearch(int array, int N, int target){

} 


// return value = the number of comparisons that was used to find the target;
int binarySarch(int array, int N, int target){

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

//make a for loop to run 100 times to call each search with trhe target
//              target value should be selected in the array randomly.
//                
