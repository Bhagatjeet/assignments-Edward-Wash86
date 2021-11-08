#include <iostream>
#include <vector>
#include <ctime>
#include <string> 

// Test build

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
class Student1{
  private:
    int sid;
    string sname;
    vector <double> score;
  public:
  Student1(){
    sid = 0;
    sname = "No_Name";
    // srand(time(NULL));
    // for(int i = 0; i < 5; i++){
    //   score.push_back((rand() % 50));
    //   cout << score[i] << " " << endl;
    };
  
  Student1(string n, int id, vector <double> &sc){
    sname = n;
    sid = id;
    for(int i = 0; i < sc.size(); i++){
      score.push_back(sc[i]);
    }
  };
  void setID(int id){
    sid = id;
  }
  void setName(string name){
    sname = name;
  }
  void setScores(vector <double> &sc){
    for(int i = 0; i < sc.size(); i++){
      score.push_back(sc[i]);
    }
  }
  void getScore(){
    cout << "Scores: ";
    for(int i = 0; i < score.size(); i++){
      cout << score[i] << endl;
    }
  }
  string getName(){
    return sname;
  }
  int getID(){
    return sid;
  }

  friend class Student2;
  

};
class Student2{
  private:
    int sid;
    string sname;
    vector <double> score;
  public:
  Student2(){
    sid = 0;
    sname = "No_Name";
    // srand(time(NULL));
    // for(int i = 0; i < 5; i++){
    //   score.push_back((rand() % 50));
    //   cout << score[i] << " " << endl;
    };
  
  Student2(string n, int id, vector <double> &sc){
    sname = n;
    sid = id;
    for(int i = 0; i < sc.size(); i++){
      score.push_back(sc[i]);
    }
  };
  void setID(int id){
    sid = id;
  }
  void setName(string name){
    sname = name;
  }
  void setScores(vector <double> &sc){
    for(int i = 0; i < sc.size(); i++){
      score.push_back(sc[i]);
    }
  }
  void getScore(){
    cout << "Scores: ";
    for(int i = 0; i < score.size(); i++){
      cout << score[i] << endl;
    }
  }
  string getName(){
    return sname;
  }
  int getID(){
    return sid;
  }
  friend class Student1;
  friend int largerTotalScore(Student1& x ,Student2& y){
    double xTotal = 0;
    double yTotal = 0;
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
  srand(time(NULL));

  vector <double> set1, set2,set3;
  for(int i = 0; i < 6; i++){
    set1.push_back((rand() % 100));
    set2.push_back((rand() % 100));
  }

  Student1 person1("bob",100093,set1);
  Student2 person2("Samuel", 10000565, set2);

  
  A a;
  B b;
  
  b.show(a);

  printAll(a,b);
  cout << endl;
  cout << "The largets score is " << largerTotalScore(person1 , person2) << endl;;
  person1.getScore();
  cout << endl;
  person2.getScore();
  
} 