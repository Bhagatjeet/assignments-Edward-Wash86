#include <iostream>
#include "Stack.hpp"
#include <vector>
#include <stack>
using namespace std;

/*
The Private data of stack
 - vector < int > pool
 The operations are aas follows:
  - stack(): creates the vector <int> with the default of 10 elemts; // revurse()
  - stack(n): creates the vector < int > with n elements; reverse()
  - clear() - clear the stack. Use the vector member clear();
  - isEmpty(): check to see if the stack is empty.
  - push(el) - put the element el on th etop of the stack //push_back()
  - pop() - Take the topmost elemnt from the stack.
  - topEl() - return the topmost elemnt in the stack without removing it. // back()- getSize();
  - printAll;
  
  Important: swap() relocation

*/
const int num = 20;

int main(){
  stack < int > myStack[num];

  for(int i = 0; i < num; i++){
    myStack[i].stack1(); 
  }

  
}
