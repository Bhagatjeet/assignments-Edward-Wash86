// member functions
// member functions
#include "Stack.hpp"
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

stack1 :: stack1(){
  vector < int > pool;
  pool.reserve(10);
}; //creates the vector <int> with the default of 10 elemts; // reverse();
stack1 :: stack1(int n){
  vector < int > pool;
  pool.reserve(n);
}; //creates the vector < int > with n elements; reverse()
void stack1 :: clear(){
   pool.clear();
}; // clear the stack. Use the vector member clear();
void stack1 :: isEmpty(){
  pool.empty();
}; //check to see if the stack is empty.
void stack1 :: push(int el){
  pool.push_back(el);
}; //put the element el on the top of the stack //push_back()
void stack1 :: pop(){
  pool.pop_back();
}; //Take the topmost elemnt from the stack.
int stack1 :: topEl(){
  return pool.back();
};
int stack1 :: getSize(){
  return pool.size();
};
void stack1 :: printAll(){
  cout << "The contents of the pool vector are: ";
  for(int i = 0; i < pool.size(); i++){
    cout << pool[i] << endl;
  } 
};