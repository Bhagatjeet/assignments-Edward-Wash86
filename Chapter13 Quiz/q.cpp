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
      
    };
    NUMBERS(int designation, int groupSize){
      ID = designation;
      for(int i = 0; i < groupSize; i++){
        numbers.push_back(rand()% 99);
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
	  cout << "ID : " << ID << "\t";
    for(int i = 0; i < numbers.size(); i++){
      cout << numbers[i] << " ";
    }
	cout << endl;
  }

};

int findMax(NUMBERS, int );

int main(){
  NUMBERS numberset[] = {NUMBERS(1,3), NUMBERS(2,5), NUMBERS(3,10) ,NUMBERS(4,5),NUMBERS(5,3)};
  
	numberset[0].printAll();
	cout << " Min: " << numberset[0].getMin() << endl;
	cout << " Max: " << numberset[0].getMax() << endl;
	numberset[1].printAll();
	numberset[2].printAll();
	numberset[3].printAll();
	numberset[4].printAll();
  
};