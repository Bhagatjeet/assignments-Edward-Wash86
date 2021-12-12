#ifndef PRODUCTWORKER_H
#define PRODUCTWORKER_H

#include "employee.hpp"


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
    void printData(){
      cout << "Name: " << employeeName << endl;
      cout << "ID number: " << employeeNumber << endl;
      cout << "Hire Date: " << hireDate << endl;
      cout << "Shift: " << shift << endl;
      cout << "Pay: " << hourlyPayRate << endl;
    }

    void

    friend class Employee;
};



#endif