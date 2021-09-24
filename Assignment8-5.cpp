#include <iostream>
#include <vector> 
#include <fstream>
#include <algorithm>

using namespace std;

void printVectors(vector<int>&, vector<string>&, int);
void fillVector(vector<int>&, vector<string>&, int);
void daulSort(vector<int>&, vector<string>&, int);

int main(){

  vector <int> numbers(10);

  fstream infile;
  const int N = 10;
  vector <int> vectorID(N);
  vector <string> names(N);
  

  // infile.open("students.txt", ios :: in);

  // if(infile){
  //   cout << "The file has been accessed." << endl;
  //   cout << endl;
  // }
  //   else if(!infile)
  //   cout << "The intened file could not be opened." << endl;

  
  fillVector(vectorID, names, N);
  
  printVectors(vectorID, names, N);

  //sort(vectorID.begin(), vectorID.end());

  daulSort(vectorID, names, N);

  cout << endl;

  printVectors(vectorID, names, N);
  
  // cout << "Students ID Numbers:     Students Names: " << endl;
  // for(int i = 0; i < N; i++){
    
  //   cout << vectorID[i] << "                 " << names[i] << endl;
  // }

  /*
  for(int i = 0: i < N; i++){
    minval = numbers[i];
    minid = i;
    for(int j = i+1; i < N; j++){
      if(minval > numbers[j]){
        minval= numbers[j];
        minid = j;
      }
    }
    numbers[minid] = numbers[i];
    numbers[i] = minval;
  }
  */

  // sort() - sort(numbers.begin(), numbers.end())
}
                  
void printVectors(vector<int>& vectorID, vector<string>& vectorNames, int SIZE){
  cout << "Students ID Numbers:     Students Names: " << endl;
  for(int i = 0; i < SIZE; i++){
    
    cout << vectorID[i] << "                 " << vectorNames[i] << endl;
  }
}

void fillVector(vector<int>& vectorID, vector<string>& vectorNames, int SIZE){
  fstream indata;
  int garbageData;

  indata.open("students.txt", ios :: in);

  if(indata){
    cout << "The file has been accessed." << endl;
    cout << endl;
  }
    else if(!indata)
    cout << "The intened file could not be opened." << endl;

  for(int i = 0; i < SIZE; i++){
    indata >> vectorID[i];
      indata >> vectorNames[i];
    for(int q = 0; q < 3; q++){
      indata >> garbageData;
    }
  }
}

void daulSort(vector<int>& vectorID, vector<string>& vectorNames, int SIZE){
  int minval, minid;
    string tmp;
    for(int i = 0; i < SIZE; i++)
    {
        minval = vectorID[i];
        minid = i;
        for(int j = i + 1; j < SIZE; j++)
        {
            if ( minval > vectorID[j] )
            {
                minval = vectorID[j];
                minid = j;
            }
        }
        vectorID[minid] = vectorID[i];
        vectorID[i] = minval;

        tmp = vectorNames[minid];
        vectorNames[minid] = vectorNames[i];
        vectorNames[i] = tmp;
    }
  
}

