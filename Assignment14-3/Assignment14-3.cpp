#include <iostream>
#include "Assignment14-3.hpp"#include <iostream>

using namespace std;

class Square{
  private:
    int width;
  public:
    Square(){
      width = 100;
    };
    void setWidth(int w){
      width = w;
    };
    int getWidth(){
      return width;
    };
    int getArea(){
      return width * 4;
    };
    friend class Rectangle;
};

class Rectangle{
  private:
    double width;
    double height;
  public:
  Rectangle(){
    width = 12;
    height = 45;
  };
  void setWidth(double w){
    width = w;
  };
  void setHeight(double h){
    height = h;
  };
  double getHeight()const {
    return height;
  };
  double getWidth() const{
    return width;
  };
  double getArea()const {
    return height * width;
  };
  Rectangle makeRectanglewithSquare(Square s){
    Rectangle square;//Object
    

    square.setWidth(s.getWidth());
    return square; //Need to return a class object;
  }
};

int main() {

  Square ana;
  Rectangle kim, nads;

  ana.setWidth(8);

 

 nads = kim.makeRectanglewithSquare(ana);

 cout << nads.getWidth() << endl;
 
} 