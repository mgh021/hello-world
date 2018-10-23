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
