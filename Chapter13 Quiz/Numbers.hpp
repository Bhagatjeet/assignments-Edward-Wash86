#ifndef NUMBERS_H
#define NUMBERS_H
#include <string>
#include <vector>
using namespace std;

class NUMBERS{
  private:
    int ID;
    vector <int> numbers;
  public:
    NUMBERS();
    NUMBERS(int designation, int groupSize);

  //Member fucntions
    int getID();
    int getSize();
    int getElm(int i);
    int getMax();
    int getMin();
    int getSum();
    void deleteElm(int d);
    void addElm(int a);
    void printAll() const;

};

#endif