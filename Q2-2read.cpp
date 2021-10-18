#include <iostream>
#include <fstream>

using namespace std;

struct students{
  int idNumber;
  string name;
  int score[3];
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
    robot.read(reinterpret_cast<char *>(&zion[p].idNumber), sizeof(zion[p].idNumber));
    
    robot.read(reinterpret_cast<char *>(nameCharArray), sizeof(nameCharArray));
    for(int i = 0; i < sizeof(nameCharArray); i++){
      zion[p].name = zion[p].name + nameCharArray[i];
    }
    
    for(int g = 0; g < 3; g++){
      robot.read(reinterpret_cast<char *>(&zion[p].score[g]), sizeof(zion[p].score));
    }

    
  }
  
  // while(!robot.eof()){
  //   cout << zion.idNumber << " " << zion.name << " ";
  //   for(int i = 0; i < 3; i++){
  //     cout << zion.score[i] << " ";
  //   }
  //   cout << endl << endl;
  // }

  
}


