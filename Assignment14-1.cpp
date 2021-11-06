//charper 14 - 1

#include <iostream>
using namespace std;

class Student{
  private:
    int sid;
    string sname;
    double scores[3];
    static int NUM_STUDENTS;
    static double TOTAL_SUM;
  public:
    Student() : sid(0), sname(){
      NUM_STUDENTS +=1;
    };
    Student(string n, int id, double sc[]){
      sname = n;
      sid = id;
      for(int i = 0; i < sizeof(scores); i++){
        scores[i] = sc[i];
        TOTAL_SUM += sc[i];  
      } 
      NUM_STUDENTS += 1;
    };
    int getId(){
      return sid;
    };
    string getName(){
      return sname;
    };
    void getScores(){
      
      for(int i = 0; i < sizeof(3); i++){
        
        cout << scores[i - 1] << endl;
      }
      
    };
    static int getNumStudent(){
      return NUM_STUDENTS;
    };
    static double getTotalSum(){
      return TOTAL_SUM;
    };

};

int Student :: NUM_STUDENTS = 0;
double Student :: TOTAL_SUM = 0;


int main(){

  Student s1;

  cout << s1.getName();
  cout << s1.getId();
  s1.getScores();

  double r[] = {45.6, 76.87, 567.56}; 

  Student s2("frank", 4637, r);

  cout << s2.getName();
  cout << s2.getId();
  s2.getScores();
  
}
