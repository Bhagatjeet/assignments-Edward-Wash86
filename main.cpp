#include <fstream>
#include <iostream>
#include "Students.h"



using namespace std;

int main() {

  fstream inFile;

  int tempID;
  string tempName;
  int tempScore[3];

  inFile.open("students.txt", ios :: out);

  if(!inFile){
    cout << "File cound not be found." << endl;
  } else {
    cout << "Infile has been opened."<< endl;
  }

  Students seats = new Students[10];

  while(!inFile.eof()){

    inFile >> tempID;
    inFile >> tempName;
    for(int q = 0; q < 3; q++){
      infile >> tempScore[q];
    }
    

    for(int p = 0; p < 10; P++){
      seats.setSid(tempID);
      seats.setSname(tempName);
      for(int e = 0; e < 3; e++){
        seats.setScores(tempScore[e],e);
      }

    }

  }

  return 0;
}



