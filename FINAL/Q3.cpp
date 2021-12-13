#include <iostream>
#include <fstream>
//#include "ProductWorker.hpp"

using namespace std;

class Employee{
  protected:
    string employeeName;
    int employeeNumber;
    string hireDate;
  public:
      Employee(){
      employeeName = "No data";
      employeeNumber = 0;
      hireDate = "No Data";
    };

    Employee(string name, int id, string hired){
      employeeName = name;
      employeeNumber = id;
      hireDate = hired;
    };

    void setName(string name){
      employeeName = name;
    }

    void setID(int id){
      employeeNumber = id;
    }

    void setHired(string hired){
      hireDate = hired;
    }

    string getName(){
      return employeeName;
    } 

    int getID(){
      return employeeNumber;
    }

    string getHired(){
      return hireDate;
    }
    
};

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
  //friend ostream& operator<<(ostream& COUT, ProductWorker& worker);
    
};

static int POS;
static string fileName;

ostream& operator<<(ostream& COUT, ProductWorker& worker){
  COUT << "Name: " << worker.getName() << endl;
  COUT << "ID number: " << worker.getID()<< endl;
  COUT << "Hire Date: " << worker.getHired()<< endl;
  COUT << "Shift: " << worker.getShift()<< endl;
  COUT << "Pay: " << worker.getPay()<< endl;
  return COUT;
}

void operator>>(fstream& FILE_IN, ProductWorker& array){
  int number, SHIFT;
  string name, date;
  double pay;
  
  
  FILE_IN.open(fileName, ios :: in);

  FILE_IN.seekg(POS);

  FILE_IN >> number;
  FILE_IN >> name;
  FILE_IN >> date;
  FILE_IN >> SHIFT;
  FILE_IN >> pay;

  array.setName(name);
  array.setID(number);
  array.setHired(date);
  array.setShift(SHIFT);
  array.setPay(pay);

  POS = FILE_IN.tellg();
  POS += 1;

  FILE_IN.close();
  
}

int main() {

  fstream FILE_IN;
  fileName = "FINAL/Worker.txt";

  ProductWorker temp[10], result;


  for(int i = 0; i < 10; i++){
    FILE_IN >> temp[i];
    
  }
  
  for(int i = 0; i < 10; i++){
    cout << temp[i] << endl;  
  }

  //cout << temp[9] << endl;
  cout << "Highest Paid:" << endl;
  
  
  
} 


