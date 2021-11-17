#include <iostream>
#include <vector>

using namespace std;

//Overload Operators - giving new meaning/ adding peramiters & change the behaivior of an operator.

//operator are the same as function just called with a character instead of giving it a formal name.
//Operators:
  //+, -, /, =, -=, +=, <<, >>, ",", *(dereferance operator), &(memory addresses), new, delete, ()

//THIS - only accessable through a member function, poointer to the current object instance.


class nads{
  private:
    vector <int> apple;
    char A = 'A';
  public:
    nads(){
      for(int i = 0; i < 5; i++){
      apple.push_back(6 + i);
    };
    int nads :: operator>(const nads &r){
      int sum1 = 0, sum2 = 0;
      for(int i = 0; i < 6; i++){
        sum1+= this -> score[i];
        sum2 += r.score[i];
      }
      return sum1 > sum2;
    }

    int nads :: operator + (const nads &r){
      int sum1 = 0, sum2 = 0;
      for(int i =0l i < 6; i++){
        sum1+= this -> score[i];
        sum2 += r.score[i];
      }
      return sum1 + sum2;
    }


  
}





int main(){
  nads ben();
  
  }


}