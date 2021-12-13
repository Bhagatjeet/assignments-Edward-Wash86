#ifndef PRODUCTWORKER_H
#define PRODUCTWORKER_H

#include "Employee.hpp"


using namespace std;

class ProductWorker : public Employee{
  private:
    int shift;
    double hourlyPayRate;
  public:
    ProductWorker() : Employee(){
      shift = 0;
      hourlyPayRate = 0;
    };
    ProductWorker(string name, int id, string hired, int SHIFT, double pay) : Employee(name,id,hired){
      shift = SHIFT;
       hourlyPayRate = pay;
    };
    void setShift(int SHIFT){
      shift = SHIFT;
    };
    void setPay(double money){
      hourlyPayRate = money;
    };
    int getShift(){
      return shift;
    };
    double getPay(){
      return hourlyPayRate;
    };
  friend class Employee;  
  friend ostream& operator<<(ostream& COUT, ProductWorker& worker);
    
};



#endif