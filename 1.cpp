#include <iostream>

using namespace std;

class Rectangle{
 int height, width;
public:
  Rectangle(int h, int w){
     height=h;
     width= w;
} 
int main()
{
 Rectangle box1(10,5);
cout<< box1.get_height()<<endl;
}
 int get_height(){return height;}
 int get_width(){return width;}
 void set_height(int h){ height=h;}
 void set_width(int w) {width=w;}
