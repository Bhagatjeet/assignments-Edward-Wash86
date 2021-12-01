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
    employee(string n,int id, int date){
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
      return employeeNumber
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
    ProductionWorker(int SHIFT, double pay, double hours){
      shift = SHIFT;
      hourlyPayRate = pay;
      workingHours = hours;
    }
    void getSalary(){
      hourlyPayRate * workingHours << endl;
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
    void pringInformation(){
      cout << "Name: " << name;
      cout << "ID number: " << employeeNumber << endl;
      cout << "Hire Date: " << getHireDate() << endl;
      cout << "Shift: " << getShift << endl;
      cout << "Hourly Wage: " << getHourlyRate << endl;
      cout << "Hourd worked: " << getWorkHours << endl;
      cout << "Salary: " << getSalary << endl;
    }
};

int main() {
  ProductionWorker temp("Edward", 1001,08082019);
  ProductionWorker temp(2,35.98,49.7);

  temp.pringInformation();

}