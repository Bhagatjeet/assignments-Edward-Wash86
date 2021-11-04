#include "Numbers.hpp"
#include <iostream>
#include <vector>

NUMBERS();

NUMBERS :: NUMBERS(int designation, int groupSize){
  
}

using namespace std;

int NUMBERS :: getID(){
    
  return ID;
};
int  NUMBERS :: getSize(){
    
  return numbers.size();
};
int  NUMBERS :: getElm(int i){
  if(i > numbers.size()){
    cout << "The group is not that big, try a lower number.";
  };
    
  return numbers[i];
};
int  NUMBERS :: getMax(){
  int max;
  max = numbers[0];
  for(int i = 0; i < numbers.size(); i++){
    if(numbers[i] > max){
      max = numbers[i];
    }
  }
    //cout << "The largest number in this group is: "; 
  return max;
};
int  NUMBERS :: getMin(){
    int min;
    min = numbers[0];
    for(int i = 0; i < numbers.size(); i++){
      if(numbers[i] < min){
        min = numbers[i];
      }
    }
    //cout << "The smallest number in this group is: "; 
  return min;
};
int  NUMBERS :: getSum(){
  int total;
  for(int i = 0; i < numbers.size(); i++){
    total = numbers[i];
    total += total;
  }
  return total;
};
void  NUMBERS :: deleteElm(int d){
  vector<int> :: iterator iter;

  for(iter = numbers.begin(); iter < numbers.end(); iter++){
    if(*iter == d){
      numbers.erase(iter);
    }

  }
};
void  NUMBERS :: addElm(int a){
  numbers.push_back(a);
};
void  NUMBERS :: printAll() const{
  cout << "ID: " << ID << " ";
  for(int i = 0; i < numbers.size(); i++){
    
    cout << numbers[i] << " ";
  }
}



