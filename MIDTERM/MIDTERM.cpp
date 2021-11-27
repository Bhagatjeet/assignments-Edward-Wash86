#include <iostream>
#include "Numbers.hpp"
#include "Student.hpp"
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int NumClass::NumberOfObjects = 0;
static int POS;

const int N = 10;

void operator>>(fstream& IMPORT, Student& array){
  
  
  IMPORT.open("MIDTERM/Students.txt", ios :: in);

   
  int sid;
  string name;
  double temp;
  vector <double> scores;

  IMPORT.seekg(POS);
  
  
  
    IMPORT >> sid;
    IMPORT >> name;
    for(int i = 0; i < 3; i++){
      IMPORT >> temp;
      scores.push_back(temp);
    }

    //for(int i = 0; i < N; i++){
      array.setID(sid);
      array.setName(name);
      for(int q  = 0; q < 3; q++){
        array.setScores(scores[q]);
      }
    //}

  
  
  POS = IMPORT.tellg();
  POS += 1;
    
  
  IMPORT.close();

    
  
  

}

ostream& operator<<(ostream& COUT, Student& E){
  COUT << endl;
  COUT << E.getID() << " ";
  COUT << E.getName() << " ";
  COUT << E.getTotalSum() << " ";
  return COUT;
}

void binarySearch(Student array[], int, int);
void bubbleSortbyScores(Student [], int );
void bubbleSortbyID(Student [], int );

int main() {
  cout << "Question 1: " << endl;

  cout << endl;
  
  NumClass edward(4,10);
  cout << endl;

  NumClass adriana(1,15);
  

  //edward.printVector();
  printNumbers(edward);
  cout << endl;
  cout << endl;
  printNumbers(adriana);

  cout << endl;
  cout << endl;

  int ben = edward > adriana;

  cout << "Result: " << ben << endl;

  cout << "Total Number of Objects: " << adriana.getNumberOfObjects() << endl;

  cout << "======================================================" << endl;
  cout << endl;

  cout << "Question 2: " << endl;

  Student person[N];

  fstream import;

  if(import){
    cout << "File access, Successful!" << endl;
  } else cout << "Failed to open file." << endl;

  int e = 0;

  while(e < N){
    import >> person[e];
    cout << person[e];
    e++;
  }

  bubbleSortbyScores(person, N);

  cout << endl;
  cout << endl;
  cout << "Bubble Sort(Decending Order): " << endl;
  for(int i = 0; i < N; i++){
    cout << i + 1 << "."; 
    cout << person[i] << endl;
  }

  bubbleSortbyID(person, N);

  cout << endl;
  cout << "Please enter the ID number of the student you would like to find: ";
  int ID;
  cin >> ID;
  binarySearch(person, N, ID);
} 

void binarySearch(Student array[], int N, int target){
  bool found = false;
  int first = 0;//first elemnt
  int mid;// middle element
  int last = N; //Last element
  int result;

  while(first <= last && !found){
    mid = (first + last) / 2;
      //10001111 > 10007777
    if(target > array[mid].getID()){
      first = mid + 1;
    }
    else if(target < array[mid].getID()){
      last = mid - 1;
    }
    else {

      found = true;
      result = mid;
      

    }
    cout << "Result: "<< mid << " ";
  } 

  cout << array[mid];
  
  if(!found){
    result = -1;

  }

  

  
}

void bubbleSortbyScores(Student E[], int N){
  for(int i = 0; i < N; i++){
    for(int q = 0; q < N; q++){
      Student temp;
      if(E[i].getTotalSum() > E[q].getTotalSum()){
        temp = E[i];
        E[i] = E[q];
        E[q] = temp;
      }
      
    }
  }
}
void bubbleSortbyID(Student E[], int N){
  for(int i = 0; i < N; i++){
    for(int q = 0; q < N; q++){
      Student temp;
      if(E[i].getID() < E[q].getID()){
        temp = E[i];
        E[i] = E[q];
        E[q] = temp;
      }
      
    }
  }
}