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
    Student();
    Student(string n, int id, double *sc);
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


int main(){
  
}
