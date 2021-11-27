#ifndef 	STUDENT_H
#define 	STUDENT_H


#include <string>
 
class Student{
  private:
    int ID;
    string name;
    vector <double> score;
  public:
    Student(){
      ID = 0;
      name = "No Data";
    };

    Student(int sID, string sName, vector <int> & E){
      ID = sID;
      name = sName;
      for(int i = 0; sizeof(E); i++){
        score.push_back(E[i]);
      }
    }
    void setScores(double q){
      score.push_back(q);
    };
    
    void getScores(){
      for(int i = 0; i < score.size(); i++){
       cout << "Score " << i << " : " << score[i];
      };
    };
  
};

#endif

/*
In this question, we will design the class Students to manage the scores. There are N(=10) students. 

Each student has a student’s ID, name, and 3 scores. In this program, you need to print out all students with the descending order of total scores.

Also, you need to provide a function to find the student who has a certain ID(this value will be asked to the user). 

In this search function, you should use the binary search algorithm to find the student. 

Design and implement the class Student including the member data and functions, and main functions to drive the Student object in order to print and get some information.

To test the program easily, you may use a text file to input to Student objects.

*/
