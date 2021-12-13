#include <iostream>
#include "ProductWorker.hpp"



using namespace std;

// ProductWorker(){
//   shift = 0;
//   hourlyPayRate = 0;
// };

void ProductWorker :: setShift(int SHIFT){
  shift = SHIFT;
};
void ProductWorker :: setPay(double money){
  hourlyPayRate = money;
};
int ProductWorker :: getShift(){
  return shift;
};
double ProductWorker :: getPay(){
  return hourlyPayRate;
};

