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
    max = numbers[0];
    for(int i = 0; i < numbers.size(); i++){
      if(numbers[i] > max){
        max = numbers[i];
      }
    }
    //cout << "The largest number in this group is: "; 
    return max;
  };
  int getMin(){
    int min;
    min = numbers[0];
    for(int i = 0; i < numbers.size(); i++){
      if(numbers[i] < min){
        min = numbers[i];
      }
    }
    //cout << "The smallest number in this group is: "; 
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
    vector<int> :: iterator iter;

    for(iter = numbers.begin(); iter < numbers.end(); iter++){
      if(*iter == d){
        numbers.erase(iter);
      }

    }
  };
  void addElm(){
    numbers.push_back(rand()% 99);
  };
  void printAll() const{
    cout << "ID: " << ID << " ";
    for(int i = 0; i < numbers.size(); i++){
      
      cout << numbers[i] << " ";
    }
  }

};

int findMax(NUMBERS[], int );
void dedup(NUMBERS[], NUMBERS[]);

int main(){
  NUMBERS numberset[] = {NUMBERS(1,3), NUMBERS(2,5), NUMBERS(3,10) ,NUMBERS(4,5),NUMBERS(5,3)};

  numberset[0].printAll();
  cout << endl;
  cout << numberset[0].getMax() << endl;

  cout << endl;
  numberset[1].printAll();
  cout << endl;
  cout << numberset[1].getMax() << endl;

  cout << endl;
  numberset[2].printAll();
  cout << endl;
  cout << numberset[2].getMax() << endl;

  cout << endl;
  numberset[3].printAll();
  cout << endl;
  cout << numberset[3].getMax() << endl;

  cout << endl;
  numberset[4].printAll();
  cout << endl;
  cout << numberset[4].getMax() << endl;

  cout << endl;
 
  cout << findMax(numberset, 5);
  cout << endl;
  cout << endl;

  numberset[0].deleteElm(28);
  numberset[0].printAll();
  cout << endl;
  
  
  // numberset[0].printAll();
  // cout << endl;
  // cout << numberset[0].getMax();
  // cout << endl;
  // cout << numberset[0].getMin();

  //cout << findMax(numberset,5);
};

//TESTED AND WORKS
int findMax(NUMBERS group[], int n){
  int absoluteMax = group[0].getMax();
  int absoluteMaxID;
  for(int i = 0; i < n; i++){
    
    if(group[i].getMax() > absoluteMax){
      absoluteMax = group[i].getMax();
    }

  }
  cout << endl;
  for(int i = 0; i < n; i++){
    if(absoluteMax == group[i].getMax()){
      absoluteMaxID = i + 1;
      cout << "The group with the highest number overall is: " << absoluteMaxID;
    }
  }

  cout<< endl;
  cout << "The overall largest number is: "; 



  return absoluteMax;
}

// void dedup(NUMBERS apple, NUMBERS oranges[]){
//   for(int i = 0; i <sizeof(apple); i++){
//     for(int u = 0; u < )
//   }
// }

