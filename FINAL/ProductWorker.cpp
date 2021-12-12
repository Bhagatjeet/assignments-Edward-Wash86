#ifndef PRODUCTWORKER_H
#define PRODUCTWORKER_H
#include "employee.hpp"

using namespace std;

class ProductWorker : public Employee{
  - int shift;
  - double hourlyPayRate;
  ProductionWorker(int shift, double pay) : Employee(name, id, hired);
  + void setShift(int shift);
  + void setPay(double money);
  + int getShift();
}

#endif