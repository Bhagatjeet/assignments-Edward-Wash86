#include <iostream>
#include <vector>
#include <string>

using namespace std;

class student{
  private;  
    int ID;
    string studentName;
    char grade;
    double scores;
  public;
    void setID(int id){
      ID = id;
    };
    void setStudentName(string name){
      studentName = name;
    };
    void setGrade(char GRADE){
      grade = GRADE;
    };
    void setScores(){
      ==================
    };
    int getID();
    string getStudentName();
    char getGrade();
    double getScores();

    friend void Course;
}

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
    Course(string name, string semester, Student blaze){
       courseName = name;
       credits = numOfCredits;
       blaze = new student; ===================
    };
    void setCourseName(string name){
      courseName = name;
    };
    void setSemester(int numOfCredits){
      credits = numOfCredits;
    };
    void setStudent(string name){

    };
    string getCourseName(){
      return courseName;
    }
    int getCredits(){
      return credits;
    };
    Student getStudent(){
      return Student;
    }

}



int main() {
  
} 