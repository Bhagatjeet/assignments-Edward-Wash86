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
  cout << "Who is paid more?" << endl;
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
  cout <<  "List in assending order: " << endl;
  for(int i = 0; i < 10; i++){
    cout << temp[i] << endl;  
  }

  cout << endl;
  cout << "Highest Paid:" << endl;
  
  HighestPaid(temp);
  cout << endl;
  int findings = temp[6] > temp[2];
  cout << "Result: " << findings;
} 

/*Notes: This program started off very well with the creating a text file with employee data. I utilized the import function that is used on Q1 and Q2. I ran into issues with the ProductWorker.cpp file not working because of some issues with Employee.cpp file, after playing around with changing and updating the public member function and not making any progress I decided to see if the out stream overload function mit be the issue. I removed the lines that where linked to the employee cpp file and tried to compile, the program compiled and then i started to add the removed segments one at a time. Finally I found out that the compilere did not like the constructor that was linkded to Product worker. I dont know why the consructor was the issue. Then the issue with the out stream overload function, its inital design only linked with the productworker class and not the employee class, i assumed that the function would not have any issues because of the inharitance from employee, i ended up having to create another out stream function that linked to the employee class to allow proper utilazation of the employee member functions. The highest paid friend function was not really that hard as the as all i had to do was to declare a friend function in the product worker class and then create an algoritim to step through the array and record the pay of the employee with the highest pay if the next employee is paid a higher rate the maxpay variable would be updated and every time the maxpay variable was update dthe employee record was recored and stored as the highest paid.
Now the part that was the most tricky for m, i tried to have the overload function return the all of the employee data, then i realized that all i needed was to have it return a true or fales value. So I had the grater-than function except a double which is the the function will be comparing.i was unable to get the data to imort at all because i wa sunable to use the accessors of the of the private data, i ended up changing the private mebers of the productworker class to protected so that those members can be accessed by other functions.i ran one more test after this bit of code and bam! Finished! 

*/





