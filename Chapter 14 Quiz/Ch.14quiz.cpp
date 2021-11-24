#include <iostream>
#include <vector>
#include <string>
#include <ctime>

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
      if(score > 90){
        grade = 'A';
      } if(score > 82 && score < 89){
        grade = 'B';
      } if(score > 72 && score < 79){
        grade = 'C';
      } if(score > 66 && score < 69){
        grade = 'D';
      } if(score < 65){
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
    Course(string name, string semester, int numOfCredits){
       courseName = name;
       credits = numOfCredits;
       vector <Student> student;
       int SID;
       string sName;
       double score = (rand() % 100);
       cout << "Enter Student ID: ";
       cin >> SID;
       cout << "Enter Student Name: ";
       getline(cin, sName);
       student.push_back(Student(SID, sName, score));

    };
    void setCourseName(string name){
      courseName = name;
    };
    void setSemester(int numOfCredits){
      credits = numOfCredits;
    };
    void setStudent(Student trainee){
      vector <Student> student;
       int SID;
       string sName;
       double score = (rand() % 100);
       cout << "Enter Student ID: ";
       cin >> SID;
       cout << "Enter Student Name: ";
       getline(cin, sName);
       student.push_back(Student(SID, sName, score));
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