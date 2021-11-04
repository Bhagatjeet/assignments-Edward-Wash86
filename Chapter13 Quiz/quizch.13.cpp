#include "Numbers.hpp"
#include <iostream>
#include <vector>

using namespace std;

int findMax(NUMBERS[], int );
void dedup(NUMBERS &, NUMBERS &);

int main(){
  NUMBERS numberset[] = {NUMBERS(1,3), NUMBERS(2,5), NUMBERS(3,10) ,NUMBERS(4,5),NUMBERS(5,3)};

  cout << "Groups with ID number and their contents: " << endl;

  for(int i = 0; i < sizeof(numberset); i++){
    numberset[i].printAll();
    cout << endl;
    cout << numberset[i].getMax() << endl;
    cout << endl;
    cout << endl;
  }
  
  cout << "Here we will scan all the values and give the largest number and which group it belongs to: " << endl;
  
  cout << findMax(numberset, 5);
  cout << endl;
  cout << endl;


  cout << "Here we will scan all the values and remove any duplicates, if a vector is left empty, it will be populated with one copy of the duplicated numbers: " << endl;
  dedup(numberset[1],numberset[3]);
  cout << endl;

  

    
  
  // numberset[0].printAll();
  // cout << endl;
  // cout << numberset[0].getMax();
  // cout << endl;
  // cout << numberset[0].getMin();

  //cout << findMax(numberset,5);
};

//TESTED AND WORKS
int findMax(NUMBERS group[], int n){
  int absoluteMax = group[0].getMax();
  int absoluteMaxID;
  for(int i = 0; i < n; i++){
    
    if(group[i].getMax() > absoluteMax){
      absoluteMax = group[i].getMax();
    }

  }
  cout << endl;
  for(int i = 0; i < n; i++){
    if(absoluteMax == group[i].getMax()){
      absoluteMaxID = i + 1;
      cout << "The group with the highest number overall is: " << absoluteMaxID;
    }
  }

  cout<< endl;
  cout << "The overall largest number is: "; 



  return absoluteMax;
}

void dedup(NUMBERS &array1, NUMBERS &array2){
  int A,B;
  int deleted[array1.getSize() + array2.getSize()];
  for(int i = 0; i < array1.getSize(); i++){
    for(int q = 0; q < array2.getSize(); q++){
      A = array1.getElm(i);
      B = array2.getElm(q);
      if(A == B){
        array1.deleteElm(A);
        array2.deleteElm(B);
        deleted[i] = A; 
      }
      
    }
    int C,D;
    C = array1.getSize();
    D = array2.getSize();
    if(C == 0){
      for(int i = 0; i < array2.getSize(); i++){
        int add = array2.getElm(i);
        array1.addElm(add);
        for(int i = 0; i < sizeof(deleted); i++){
          array2.addElm(deleted[i]);
        }
      }
    } else if(D == 0){
      for(int i = 0; i < array1.getSize(); i++){
        int add = array1.getElm(i);
        array2.addElm(add);
        for(int i = 0; i < sizeof(deleted); i++){
          array1.addElm(deleted[i]);
        }
      }
    }
  }
  // array1.printAll();
  // cout << endl;
  // array2.printAll();
}

