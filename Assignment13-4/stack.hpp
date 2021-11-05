// class declaration
#ifndef STACK_H
#define STACK_H
#include <vector>
using namespace std;

class stack1{
  private:
    vector <int> pool;
  public:
    stack1(); //creates the vector <int> with the default of 10 elemts; // revurse()
    stack1(int n); //creates the vector < int > with n elements; reverse()
    void clear(); // clear the stack. Use the vector member clear();
    void isEmpty(); //check to see if the stack is empty.
    void push(int el); //put the element el on th etop of the stack //push_back()
    void pop(); //Take the topmost elemnt from the stack.
    int topEl();
    int getSize();
    void printAll();

};

#endif