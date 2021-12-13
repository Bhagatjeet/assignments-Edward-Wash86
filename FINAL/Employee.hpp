#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;

class Employee{
  protected:
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

    friend class ProductWorker;
    //friend ostream& operator<<(ostream& COUT, ProductWorker& worker);
};

//friend class ProductWorker;

#endif