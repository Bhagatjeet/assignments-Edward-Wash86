#include <iostream>
#include <vector>

using namespace std;

class Course{
  private:
    string courseName, semester;
    int credits;
    vector <Student> student;  
  public:
    Course(){
      courseName = "No Data";
      credits = 0;
      if(student.size == 0){
        cout << "No Students Enrolled." << endl;
      }
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

class student{
  int ID;
  string studentName;
  char grade;
  double scores;
}

int main() {
  
} 