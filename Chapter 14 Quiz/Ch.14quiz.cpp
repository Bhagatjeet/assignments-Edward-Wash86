#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

class Student{
  private:  
    int ID;
    string studentName;
    char grade;
    double scores;
  public:
    Student(){
      ID = 0;
      studentName = "No Data";
      
      scores = 0;
    };
    Student(int id, string name, double score){
      ID = id;
      studentName = name;
      scores = score;
      if (score >= 90){
        grade = 'A';
      } else if (score >= 80) {
        grade = 'B';
      } else if (score >= 70) {
        grade = 'C';
      } else if (score >= 60) {
        grade = 'D';
      } else if (score < 60) {
        grade = 'F';
      }
    }
    void setID(int id){
      ID = id;
    };
    void setStudentName(string name){
      studentName = name;
    };
    void setGrade(char GRADE){
      grade = GRADE;
    };
    void setScores(double SCORE){
      scores = SCORE;
    };
    int getID(){
      return ID;
    };
    string getStudentName(){
      return studentName;
    };
    char getGrade(){
      return grade;
    };
    double getScores(){
      return scores;
    };

    friend class Course;
};

class Course{
  private:
    string courseName, semester;
    int credits;
    vector <Student> student;  
  public:
    Course(){
      courseName = "No Data";
      credits = 0;
      if(student.size() == 0){
        cout << "No Students Enrolled." << endl;
      }
    };
    Course(string name, string SEMESTER, int numOfCredits){
       courseName = name;
       credits = numOfCredits;
       semester = SEMESTER;
       cout << "****************** Course has been created ******************" << endl;
       cout << endl;
       cout << "Course: " << courseName << endl;
       cout << "Semester: " << semester << endl;
       cout << "Credits: " << credits << endl;
    };
    void setCourseName(string name){
      courseName = name;
    };
    void setCredits(int n){
      credits = n;
    }
    void setSemester(string name){
      semester = name;
    };
    void setStudent(){
      srand(time(NULL));
      int SID;
      string sName;
      double score = (rand() % 100);
      cout << endl;
      cout << "Enter Student ID: ";
      cin >> SID;
      cin.ignore();
      cout << "Enter Student Name: ";
      getline(cin, sName);
      student.push_back(Student(SID, sName, score));
      cout << endl;
      cout << "****************** Student Added ******************" << endl;
      cout << endl;
      for(int i = 0; i < student.size(); i++){
        cout << "Student ID: " << endl;
        cout << student[i].getID() << endl;
        cout << "Student Name: " << endl;
        cout << student[i].getStudentName() << endl;
        cout << "Current Grade: " << endl;
        cout << student[i].getGrade() << endl;
        cout << "Current Score: " << endl;
        cout << student[i].getScores() << endl;
      }
    };
    void setStudentFile(int sid, string sName, double sScore){
      student.push_back(Student(sid, sName, sScore));
    }
    string getCourseName(){
      return courseName;
    }
    int getCredits(){
      return credits;
    };
    string getSemester(){
      return semester;
    }
    void getStudent(){
      unsigned int id;
      cout << "Please enter a student ID: ";
      cin >> id;
      for(int i = 0; i < student.size(); i++){
        if(id == student[i].getID()){
          cout << "******************* Student Information *******************" << endl;
          cout << endl;
          cout << "Student ID: " << endl;
          cout << student[i].getID() << endl;
          cout << "Student Name: " << endl;
          cout << student[i].getStudentName() << endl;
          cout << "Current Grade: " << endl;
          cout << student[i].getGrade() << endl;
          cout << "Current Score: " << endl;
          cout << student[i].getScores() << endl;
        }
      }
    }
    void getStudent1(){
      for(int i = 0; i < student.size(); i++){
          cout << "******************* Student Information *******************" << endl;
          cout << endl;
          cout << "Student ID: " << endl;
          cout << student[i].getID() << endl;
          cout << "Student Name: " << endl;
          cout << student[i].getStudentName() << endl;
          cout << "Current Grade: " << endl;
          cout << student[i].getGrade() << endl;
          cout << "Current Score: " << endl;
          cout << student[i].getScores() << endl;
      }
    }

};

// ostream& operator<<(ostream& COUT, person1& E){
//   COUT << "Name:" << E.getName() << endl;
//   COUT << "Age: " << E.getAge() << endl;
//   COUT << "Gender: " << E.getGender() << endl; 
//   return COUT;
// };

void operator>>(fstream& IMPORT, Course& E){
  
  
  IMPORT.open("CourseStudents.txt", ios:: in);
  string name, semester;
  int credits, numberOfStudents, sid;
  char grade;
  double score;
  


  
    IMPORT >> name;
    E.setCourseName(name);
    IMPORT >> credits;
    E.setCredits(credits);
    IMPORT >> semester;
    E.setSemester(semester);

    IMPORT >> numberOfStudents;

    IMPORT >> sid;
    IMPORT >> name;
    IMPORT >> grade;
    IMPORT >> score;
    E.setStudentFile(sid,name,score);
  

}
ostream& operator<<(ostream& COUT, Course& E){
  COUT << "Course: " << E.getCourseName() << endl; 
  COUT << "Credits: " << E.getCredits() << endl;
  COUT << "Semester: " << E.getSemester() << endl;
  COUT << "     ";
  E.getStudent1();
  return COUT;
};




int main() {
  srand(time(NULL));

  fstream courseFile;

  //name, semester, numOfCredits
  //Course CS1("CS1", "Fall 2021",4);
  Course CS2;
  
  //CS1.setStudent();
  cout << endl;
  
  
  //CS1.getStudent();

  courseFile >> CS2;

  cout << CS2;

  
} 