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
    static int NUM_COURSES;  
  public:
    Course(){
      courseName = "No Data";
      credits = 0;
      if(student.size() == 0){
        cout << "No Students Enrolled." << endl;
      }
      NUM_COURSES +=1;
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
       NUM_COURSES +=1;
    };
    void setCourseName(string name){
      courseName = name;
    };
    void setCredits(int numOfCredits){
      credits = numOfCredits;
    };
    void setSemester(string SEMESTER){
      semester = SEMESTER;
    };
    void setStudent1(int id, string name, double score){
        student.push_back(Student(id, name, score));
      }
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
    string getCourseName(){
      return courseName;
    }
    int getCredits(){
      return credits;
    };
    void getStudent(){
      int id;
      cout << "Please enter a student ID: ";
      cin >> id;
      cout << student.size() << endl;
      for(int i = 0; i < student.size(); i++){
        cout << i << " " << student[i].getID() << endl;
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

};

ifstream& operator>>(fstream& IN, Course& E){
  string name;
  int credits;
  string semester;
  int numberOfStudents;



  IN >> name;
  E.setCourseName(name);
  IN >> credits;
  E.setCredits(credits);
  IN >> semester;
  E.setSemester(semester);
  IN >> numberOfStudents;

  int studentID;
  string studentName;
  char grade;
  double score;

  for(int i = 0; i < numberOfStudents; i++){
    IN >> studentID;
    IN >> studentName;
    IN >> grade;
    IN >> score;
    E.setStudent1(studentID, studentName, score);
  };
  return IN;
};

int main() {
  srand(time(NULL));

  fstream bacon;

  bacon.open("CourseStudents.txt", ios :: in);

  //name, semester, numOfCredits
  Course CS1("CS1", "Fall 2021",4);
  
  CS1.setStudent();
  cout << "Printing: " << endl;
  cout << endl;
  CS1.getStudent();

  bacon >> CS1();

  
} 