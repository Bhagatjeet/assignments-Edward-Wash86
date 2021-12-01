//
//  main.cpp
//  CS2
//
//  Created by Edward Washington on 11/30/21.
//

#include <iostream>
#include <vector>

using namespace std;

class Employee{
  private:
    int hireDate;
  protected:
    string name;
    int employeeNumber;
  public:
    Employee(string n,int id, int date){
      name = n;
      employeeNumber = id;
      hireDate = date;
    }
    void setName(string n){
      name = n;
    }
    void setID(int id){
      employeeNumber = id;
    }
    void setHireDate(int date){
      hireDate = date;
    }
    string getName(){
      return name;
    }
    int getEmployeeID(){
        return employeeNumber;
    }
    int getHireDate(){
      return hireDate;
    }

};

class ProductionWorker : public Employee{
  private:
    int shift;
    double hourlyPayRate;
    double workingHours;
  public:
    ProductionWorker(string NAME, int ID, int hire) : Employee(NAME, ID, hire){

    }
//    ProductionWorker(int SHIFT, double pay, double hours){
//      shift = SHIFT;
//      hourlyPayRate = pay;
//      workingHours = hours;
//    }
    void getSalary(){
      cout << hourlyPayRate * workingHours;
    }
    int getShift(){
      return shift;
    }
    double getHourlyRate(){
      return hourlyPayRate;
    }
    double getWorkHours(){
      return workingHours;
    }
    void setHourly(double pay){
      hourlyPayRate = pay;
    }
    void setShift(int SHIFT){
      shift = SHIFT;
    }
    void setWorkHours(double hours){
      workingHours = hours;
    }
    void pringInformation(){
      cout << "Name: " << name << endl;
      cout << "ID number: " << employeeNumber << endl;
      cout << "Hire Date: " << getHireDate() << endl;
      cout << "Shift: " << getShift() << endl;
      cout << "Hourly Wage: " << getHourlyRate() << endl;
      cout << "Hourd worked: " << getWorkHours() << endl;
        
        cout << "Salary: ";
        getSalary();
    }
};

int main() {
  ProductionWorker temp("Edward", 1001,2019);
  //ProductionWorker temp(2,35.98,49.7);

  temp.setHourly(56.67);
  temp.setShift(1);
  temp.setWorkHours(67.8);

  temp.pringInformation();

}
