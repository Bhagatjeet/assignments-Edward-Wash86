#include <iostream>
#include <string>

using namespace std;

class Numbers{
  private:
    int size;
    int *numbers; //pointer
  public:
    Numbers(){
      size = 0;
      numbers = nullptr;
    }; // default constructor
    Numbers(int s){
      size = s;
      numbers = new int [size];
      for(int i = 0; i < size; i++){
        numbers[i] = 674 * s[i];
        }
    };
    Numbers(const Numbers &){
      this -> size;
      this -> numbers = new int[size];
      for(int i = 0; i < size; i++){
        this -> numbers[i] = numbers[i];
      }
    }; //referance
    ~Numbers(){
      cout << "Activated Deconstructor" << endl;
      delete [] numbers;
    }; //Destructor
    int getMax() const{
      int max = numbers[0];
      for(int i = 0; i < size; i++){
        if(number[i] > max){
          max = numbers[i];
        }
      }
      return max;
    };
    friend void printNumbers();
};

int main(){

}