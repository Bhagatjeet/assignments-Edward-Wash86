#ifndef 	NUMBERS_H
#define 	NUMBERS_H

/*
constructions Numbers()
default size is 10. make new int[10]and assign to "head".
set the value n to the size. make new int[n] and assign to head void bubbleSort(int), if peramiter is 1, assending sort, otherwise desending.

using the setElement():void, fillup the random values of the array.

using the setElement(value:int, i:int), set v to the i_th element.

printNUmbers():void, print all number in decending order.

create a main function to test your member function.
*/

class Numbers{
  private;
  int size;
  int *head;

  public:
  Numbers();
  Numbers(int);
    //construct
  getSize()const: int;
  getElement(i:int) const int;
    //get the i_th element.
  getSum() const: double;
    // get the sum of all the elements.
  getAvg() const: double;
    //get the average of all the elements.
  setElements(): void;
  setElements(value:int, i: int):void
    //set the value of the i_th elements.
  bubbleSort(dessc:int): void;
    //sort all number in assending order, if the param is 0 then sort in decending order.
  printNumbers(desc:int): void;
  clear();
    //delete a all memory space for numbers.

};