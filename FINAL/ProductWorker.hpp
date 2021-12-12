#ifndef PRODUCTWORKER_H
#define PRODUCTWORKER_H

using namespace std;

class ProductWorker : public Employee{
  - int shift;
  - double hourlyPayRate;
  ProductionWorker(String name, int id, int hired, int shift, double hours);
  + void setShift(int shift);
  + void setPay(int money);
  + int getShift();
  
}

#endif