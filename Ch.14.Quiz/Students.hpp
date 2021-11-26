#ifndef 	STUDENTS_H
#define 	STUDENTS_H
#include <string>

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
        grade = 'W';
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

#endif