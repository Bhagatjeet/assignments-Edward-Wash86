#ifndef 	NUMBERS_H
#define 	NUMBERS_H

#include <ctime>
#include <vector>

using namespace std;

class NumClass{
  private:
    int ID;
    vector <unsigned int> values;
    static int NumberOfOjgects;
  public:
    static int getNumberOfObjects(){
      return NumberOfOjgects;
    }

    NumClass(){
      ID = 0;
      cout << "Object " << ID << " no data" << endl;
      NumberOfOjgects += 1;
    }

    NumClass(int i, int n){
      srand(time(NULL));
      ID = i;
      for(int i = 0; i < n; i++){
        values.push_back(rand() % 99);
      }
      NumberOfOjgects += 1;
    }

    int getID(){
      return ID;
    }

    void printVector(){
      cout << "Object: " << ID << endl;
      if(values.size() == 0){
        cout << "This vector has no data." << endl;
      }
      if(values.size() != 0){
        cout << "Values: " << endl;
        for(int i = 0; i < values.size(); i++){
        cout << values[i] << " ";
        }
      }
    }

    int operator>(const NumClass&){
      int sum1 = 0, sum2 = 0;
      for(int i = 0; i < values.size(); i++){
        sum1+= this -> values[i];
        sum2 += values[i];
      }
      cout << "sum1: " << sum1 << " " << "sum2: " << sum2 << endl;
      cout << "If the result is: 1, sum1 is larger." << endl;
      cout << "If the result is: 0, sum1 is not larger." << endl;
      return sum1 > sum2;
    } 

    friend void printNumbers(NumClass n){
      n.printVector();
    };

    friend void totalNumberOfObjects(){
      cout << "Total number of OBJECTS: " << getNumberOfObjects();
    }
};



#endif