#include <iostream>
#include <fstream>
#include "ProductWorker.cpp"

using namespace std;

static int POS;
static string fileName;
static double maxPay = 0;

ostream& operator<<(ostream& COUT, Employee& worker){
  

  return COUT;
}

ostream& operator<<(ostream& COUT, ProductWorker& worker){
  COUT << "Name: " << worker.getName() << endl;
  COUT << "ID number: " << worker.getID()<< endl;
  COUT << "Hire Date: " << worker.getHired()<< endl;
  COUT << "Shift: " << worker.getShift()<< endl;
  COUT << "Pay: " << worker.getPay()<< endl;
  return COUT;
}

double operator > (const ProductWorker &Q, const ProductWorker &F){
  cout << Q.employeeName << "'s Pay: " << Q.hourlyPayRate << endl;
  cout << F.employeeName << "'s Pay: " << F.hourlyPayRate;
  cout << " " << endl;
  cout << "If the result is: 1, " <<Q.employeeName << " is paid more." << endl;
  cout << "If the result is: 0, " <<Q.employeeName << " is not paid more." << endl;
  return Q.hourlyPayRate > F.hourlyPayRate;
}

void HighestPaid(ProductWorker *array){
  ProductWorker Winner;
  for(int i = 0; i < 10; i++)
    if(array[i].getPay() > maxPay){
      maxPay = array[i].getPay();
      Winner = array[i];
    }
    
 cout << Winner;
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

  cout << endl;
  cout << "Highest Paid:" << endl;
  
  HighestPaid(temp);
  cout << endl;
  int findings = temp[6] > temp[2];
  cout << "Result: " << findings;
} 




