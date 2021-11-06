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
    Student() : sid(0), sname("noname"),score[](){
      NUM_STUDENTS +=1;
    };
    Student(string n, int id, double *sc){
      sname = n;
      sid = id;
      scores[0] = *sc; 
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
};

int Student :: NUM_STUDENTS = 0;


int main(){
  
}
