#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "14.Students.hpp"
#include "14.Course.hpp"

using namespace std;

int Course :: NUM_COURSES = 0;
static int POS;


void operator>>(fstream& IMPORT, Course& array){
  
  
//   IMPORT.open("Ch.14.Quiz/CourseStudents.txt", ios:: in);
  IMPORT.open("CourseStudents.txt", ios:: in);
  if(!IMPORT){
    cout << "Error 1" << endl;
  }
  
  string name, semester;
  int credits, numberOfStudents, sid;
  char grade;
  double score;
  
  //cout << "starting at: " << POS << endl;
  IMPORT.seekg(POS);
  
  

  IMPORT >> name;
  array.setCourseName(name);
  IMPORT >> credits;
  array.setCredits(credits);
  IMPORT >> semester;
  array.setSemester(semester);

  IMPORT >> numberOfStudents;

  for(int i = 0; i < numberOfStudents; i++){
    IMPORT >> sid;
    IMPORT >> name;
    IMPORT >> grade;
    IMPORT >> score;
    array.setStudentFile(sid,name,score);
  }

  
  POS = IMPORT.tellg();//Getting the position of the indicator
  POS += 1;
  
    
  
  IMPORT.close();

    
  
  

}
ostream& operator<<(ostream& COUT, Course& E){
  COUT << endl;
  COUT << "Course: " << E.getCourseName() << endl; 
  COUT << "Credits: " << E.getCredits() << endl;
  COUT << "Semester: " << E.getSemester() << endl;
  COUT << "     ";
  E.getStudent1();
  return COUT;
};




int main() {
  srand(time(NULL));

  fstream courseFile, addStudent;


  Course courses[4];

  //name, semester, numOfCredits
  //Course CS1("CS1", "Fall 2021",4);
  //Course CS2;
  
  //CS1.setStudent();
  cout << endl;
  
  
  //CS1.getStudent();

  for(int i = 0; i < 4; i++){
    courseFile >> courses[i];
  }
  

//   addStudent.open("Ch.14.Quiz/addstudent.txt", ios :: in);
  addStudent.open("addstudent.txt", ios :: in);

  if(!addStudent){
      cout << "Error 2" << endl;
    }

  string courseName, sName;
  int students,sid;
  char grade;
  double score;

  
  for(int q = 4; q<6; q++){
    addStudent >> courseName;
    addStudent >> students;
    for(int w = 0; w < 4; w++){
            if(courses[w].getCourseName() == courseName){
        for(int i = 0; i < students; i++){
          addStudent >> sid;
          addStudent >> sName;
          addStudent >> grade;
          addStudent >> score;
          courses[w].setStudentFile(sid, sName, score);
        }
      }
    }    
  }

  addStudent.close();

for(int i = 0; i < 4; i++){
    cout << courses[i];
  }
  
  

  
} 