#include <iostream>
#include <vector>

class NUMBERS{
  private;
  int ID;
  vector < vector<int> > numbers;
  public: 
  NUMBERS(){
    ID = -1;
  };
  NUMBERS(int group, int set){
    for(int i =0; i < group; i++){
    vector <int> temp;
    for(int y = 0; y < set; y++){
      temp.push_back(0);
    }
    numbers.push_back(temp);
    };

    for(int i = 0; i < set; i++){
      number[group][i] = rand()% 99;
    }
  };
  int getID() const{
    return ID;
  }
  int getSize() const{
    return numbers.size();
  }
  int getElm(int i) const{
    
  }

    
}

int main(){
  NUMBERS(1) 
}