#ifndef STUDENTS_H
#define STUDENTS_H



class Student{
  private:
    int sid;
    string sname;
    double scores[3];
  public:
    int getSid() const;
    string getSname() const;
    double getScores(int) const;
    double getAvg() const;
    void setSid(int);
    void setSname(string);
    void setScorse(int,int);
}

#endif

//#ifndef - include gaurd - prevents the header file from accidentlly being included twice.

//#define - if not defined - is used to determine whether a specific constant has not been defined.


/* 

*/
