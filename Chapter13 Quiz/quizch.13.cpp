#include <iostream>
#include <vector>

using namespace std;

class NUMBERS{
  private:
  int ID;
  vector <int> numbers;
  public:
  NUMBERS(){
    ID = -1;
    vector <int> group;
  };
  NUMBERS(int designation, int groupSize){
    ID = designation;
    for(int i = 0; i < groupSize; i++){
      numbers.push_back(rand()% 99);
    }
    cout << "group contents: "; 
    for(int i = 0; i < numbers.size(); i++){
      cout << numbers[i] << " ";
    }
  };

  //Member fucntions
  int getID(){
    cout << "The group's ID is: ";
    return ID;
  };
  int getSize(){
    cout << "The group's size is: ";
    return numbers.size();
  };
  int getElm(int i){
    cout << "The element you requested is: ";
    if(i > numbers.size()){
      cout << "The group is not that big, try a lower number.";
    };
    cin >> i;
    return numbers[i];
  };
  int getMax(){
    int max;
    for(int i = 0; i < numbers.size(); i++){
      max = numbers[0];
      if(numbers[i] > max){
        max = numbers[i];
      }
    }
    cout << "The largest number in this group is: "; 
    return max;
  };
  int getMin(){
    int min;
    for(int i = 0; i < numbers.size(); i++){
      min = numbers[0];
      if(numbers[i] < min){
        min = numbers[i];
      }
    }
    cout << "The largest number in this group is: "; 
    return min;
  };
  int getSum(){
    int total;
    for(int i = 0; i < numbers.size(); i++){
      total = numbers[i];
      total += total;
    }
    return total;
  };
  void deleteElm(int d){
    numbers.erase(numbers.begin() + d);
  };
  void addElm(){
    numbers.push_back(rand()% 99);
  };
  void printAll() const{
    for(int i = 0; i < numbers.size(); i++){
      cout << numbers[i] << " ";
    
  }
};

int findMax(NUMBERS, int );
int main(){
  NUMBERS numberset[] = {NUMBERS(1,3), NUMBERS(2,5), NUMBERS(3,10) ,NUMBERS(4,5),NUMBERS(5,3)};
  
  
  findMax(numberset, 5);
  
  



  
  
};

int findMax(NUMBERS group, int n){
  for(int i =0; )

}