#include <iostream>
using namespace std;

class Rectangle{
private:
int length;
int breadth;

public:

//contructor
/*
Rectangle(){
 length=1;
 breadth=1;
}
*/

//parameterized constructor
//copy constructor
Rectangle(int l=1, int b=1){
  setLength(l);
  setBreadth(b);
}
//copy constructor
Rectangle(Rectangle &r){
  length=r.length;
  breadth=r.breadth;
}

void setLength(int l){
  if(l>0){
    length=l;
  }else{
    length=1;
  }
}

void setBreadth(int b){
  if(b>0){
    breadth=b;
    
  }
  else{
    breadth=1;
  }
}

int getLength(){return length;}
int getBreadth(){return breadth;}

int area(){
  return length*breadth;
}

int perimeter(){
  return 2*(length+breadth);
}
};


int  main() {
  
  Rectangle r1(10,5);
  Rectangle r2(r1);
  cout <<r2.area()<<endl;
  
  


}
