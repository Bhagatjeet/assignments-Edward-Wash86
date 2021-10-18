#include <iostream>
#include <fstream>

using namespace std;

const int LEN_NAME = 20;
const int NUM_SCORES = 3;

struct students{
  int sid;
  char sname[LEN_NAME];
  double score[NUM_SCORES];
};

int main(){
  const int size = 10;
  students *zion;
  fstream robot;
  int spam = 0;
  char nameCharArray[8];

  robot.open("students.bin", ios :: in | ios :: binary);

  zion =  new students[size];

  if(robot){
    cout << "file has been opened." << endl; 
  }

  for(int p = 0; p < size; p++){
    robot.read(reinterpret_cast<char *>(&zion[p].sid), sizeof(zion[p].sid));
    
    robot.read(reinterpret_cast<char *>(zion[p].sname), sizeof(zion[p].sname));
    
    
    for(int g = 0; g < 3; g++){
      robot.read(reinterpret_cast<char *>(&zion[p].score[g]), sizeof(zion[p].score));
    }

    
  }

  for(int i = 0; i < 10; i++){
    cout << zion[i].sid << " ";
    cout << zion[i].sname << " ";
    for(int e = 0; e < 3; e++)
      cout << zion[i].score[e] << " ";
  }
  
  // while(!robot.eof()){
  //   cout << zion.idNumber << " " << zion.name << " ";
  //   for(int i = 0; i < 3; i++){
  //     cout << zion.score[i] << " ";
  //   }
  //   cout << endl << endl;
  // }

  
}


