#include <iostream>
#include <fstream>
#include "ProductWorker.hpp"

using namespace std;

static int POS;
static string fileName;

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

  array.setID(id);
  array.setName(name);
  array.setCredit(credit);

  POS = FILE_IN.tellg();
  POS += 1;

  FILE_IN.close();
  
}

int main(){
  cout << "working" << endl;
}
