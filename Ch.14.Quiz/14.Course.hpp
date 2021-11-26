#ifndef 	COURSE_H
#define 	COURSE_H
#include <string>

using namespace std;

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
       NUM_COURSES += 1;
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
    int compare(int s){
      return student[s].getID();
    }
    int studentsSize(){
      return student.size();
    }

};

#endif