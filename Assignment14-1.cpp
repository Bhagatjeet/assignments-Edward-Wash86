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
      NUM_STUDENTS +=1;
    };
    int getId(){
      return sid;
    };
    string getName(){
      return sname;
    };
    int getScores(){
      for(int i =0; i < sizeof(scores); i++){
        return scores[i];
        }
    };
    static int getNumStudent();
    static double getTotalSum();

};

int Student :: NUM_STUDENTS = 0;
double Student :: TOTAL_SUM = 0;


int main(){
  
}
