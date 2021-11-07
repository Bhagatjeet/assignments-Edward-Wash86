#include <iostream>
#include <vector>

// Test build of concept

using namespace std;

class A{
  private:
    int p_A = 100;
    friend class B;// freind relation does not go both ways. (friend class)
};
class B{
  private:
    int p_B = 50;
  public:
    void show(A& x){
      cout << x.p_A;//accessing private member.(friend class)
    }
    friend class A;
    friend void printAll(A& x, B& y){
      cout << x.p_A << endl;
      cout << y.p_B << endl;
    }
};
class C{
  private:
    vector <double> score;
  public:
  C(){
    for(int i = 0; i < 5; i++){
      score.push_back(i * 9.8);
      cout << score[i] << " " << endl;
    }
  };
  friend class D;
  

};
class D{
  private:
    vector <double> score;
  public:
  D(){
    for(int i = 0; i < 5; i++){
      score.push_back(i * 4.9);
      cout << score[i] << " " << endl;
    }
  };
  friend class C;
  friend int largerTotalScore(C& x ,D& y){
    int xTotal = 0;
    int yTotal = 0;
    int master;
    for(int i = 0; i < 5; i++){
      xTotal += x.score[i];
      yTotal += y.score[i];
    }
    if(xTotal < yTotal){
      cout << "from the second peramiter: ";
      master = yTotal;
      }
    else if(yTotal < xTotal){
      cout << "from the first peramiter: ";
      master = xTotal;
    }
    return master;
  }

};



int main() {
  A a;
  B b;
  C c;
  D d;
  //b.show(a);

  //printAll(a,b);
  cout << endl;
  cout << "The largets score is " << largerTotalScore(c , d);
  
} 