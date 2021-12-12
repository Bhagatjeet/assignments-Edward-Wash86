/*
#ifndef PRODUCTWORKER_H
#define PRODUCTWORKER_H

using namespace std;

class ProductWorker : public Employee{
  - int shift;
  - double hourlyPayRate;
  ProductionWorker(string name, int id, int hired, int shift, double pay );
  + void setShift(int shift);
  + void setPay(double money);
  + int getShift();
}

#endif
=====================================================

class Employee{
  private:
    string employeeName;
    int employeeNumber;
    string hireDate;
  public:
    Employee();
    Employee(string name, int id, string hired);
    void setName(string name);
    void setID(int id);
    void setHired(string hired);
    string getName();
    int getID();
    string getHired(); 
};
*/

#include <iostream>
#include "productworker.hpp"
#include "employee.hpp"

using namespace std;

ProductWorker :: ProductWorker(int SHIFT, double pay) : Employee(name,id,hired){
  shift = SHIFT;
  hourlyPayRate = pay;
} 



