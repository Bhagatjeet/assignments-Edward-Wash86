//Implamentation file for Student class. (lines 2 - 4)
#include "13-2Numbers.hpp"
#include <iostream>
#include <cstdlib>
/*
constructions Numbers()
default size is 10. make new int[10]and assign to "head".
set the value n to the size. make new int[n] and assign to head void bubbleSort(int), if peramiter is 1, assending sort, otherwise desending.
using the setElement():void, fillup the random values of the array.
using the setElement(value:int, i:int), set v to the i_th element.
printNUmbers():void, print all number in decending order.
create a main function to test your member function.
*/

using namespace std;

  
Numbers(){
  *head = new int[10];
}
//This is the default constructor, if no peramiter is enter in the "()" the memory space allocated for the members of this class will be filled with random garbage if default member values are not initalized.
Numbers(int n);{
  *head = new int[n];
}
  //This construct is a second one that will set the size of the array by the user entering an value into the promt.
int Numbers :: getSize()const{
  return sizeof(head);
}
//This member function returns the size of the class Numbers array.
int Numbers:: getElement(int i) {
  return head[i];
}
  //get the i_th element.
double Numbers:: getSum() const {
  int total = 0;
  for(int i = 0; i < sizeof(head); i++){
    int sum = 0;
    sum = head[i];
    total += sum;
  }
  return total;
}
  // get the sum of all the elements.
double Numbers:: getAvg() const{
  int total = getSum();
  return total / sizeof(head);
}
  //get the average of all the elements.
void Numbers:: setElements() {
  
}
void Numbers:: setElements(int i , value){
  
}
  //set the value of the i_th elements.
// void Numbers:: bubbleSort(dessc:int);
//   //sort all number in assending order, if the param is 0 then sort in decending order.
// void Numbers:: printNumbers(desc:int);
//   clear();
//   //delete a all memory space for numbers.
