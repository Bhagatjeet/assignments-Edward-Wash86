#include <iostream>
#include <fstream>

using namespace std;

struct students{
  int idNumber;
  string name;
  int score[3];
};

int main(){
  students zion[10];
  fstream robot;
  int spam = 0;

  robot.open("students.bin", ios :: in | ios :: binary);




  robot.seekg(0,ios::end);
  spam = (int)robot.tellg();
  robot.seekg(0,ios::beg);

  while(robot.tellg() < spam){
    for(int i = 0; i < 10; i++){
      robot.read(reinterpret_cast<char*>(&zion[i].idNumber), sizeof(zion[i].name));
      robot.read(reinterpret_cast<char*>(&zion[i].name), sizeof(zion[i].name));
      for(int q = 0; q < 3; q++){
        robot.read(reinterpret_cast<char*>(&zion[i].score[q]), sizeof(zion[i].score[q]));
      }
      cout << zion[i].idNumber << " " << zion[i].name << " ";
      for(int w = 0; w < 3; w++){
        cout << zion[i].score[w] << " ";
      }
      cout << endl;  
    }
    
  }

  
}


