#include <iostream>
#include <fstream>
#include "productworker.hpp"

using namespace std;

void findHighestPaid(ProductWorker *);

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
  fileName = "Worker.txt";

  ProductWorker temp[10], result;


  for(int i = 0; i < 10; i++){
    FILE_IN >> temp[i];
    
  }
  
  for(int i = 0; i < 10; i++){
    cout << temp[i] << endl;  
  }

  //cout << temp[9] << endl;
  cout << "Highest Paid:" << endl;
  findHighestPaid(temp);
  
  
} 

ProductWorker findHighesPaid(ProductWorker *array){
  ProductWorker max;
  
  for(int i = 0; i < 10; i++){
    
    if(array[i].getPay() > array[i].getPay())
      max = array[i + 1]; 
  }
  
  return max;
}
