#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;

class Employee{
  private:
    string employeeName;
    int employeeNumber;
    string hireDate;
  public:
    Employee();
    Employee(String name, int id, int hired)
    void setName(string name);
    void setID(int id);
    void setHired(int hired);
    string getName();
    int getID();
    int getHired(); 
}

#endif