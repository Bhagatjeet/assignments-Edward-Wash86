#include <iostream>
#include <string>

using namespace std;

class Numbers{
  private:
    int size;
    int *numbers; //pointer
  public:
    Numbers(); // default constructor
    Numbers(int s);
    Numbers(const Numbers &); //referance
    ~Numbers(); //Destructor
    int getMAx() const;
    friend void printNumbers();
};

int main(){

}