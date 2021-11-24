#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

class Student{
  private;  
    int ID;
    string studentName;
    char grade;
    double scores;
  public;
    Student(){
      ID = 0;
      studentName = "No Data";
      char = NULL;
      score = 0;
    };
    Student(int id, string name, double score){
      ID = id;
      studentName = name;
      if(score > 90){
        grade = 'A';
      } if(score > 82 && score < 89){
        grade = 'B';
      } if(score > 82 && score < 89){
        grade = 'C';
      } if(score > 82 && score < 89){
        grade = 'D';
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
      score = SCORE;
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
  srand(time(NULL));
  
} 