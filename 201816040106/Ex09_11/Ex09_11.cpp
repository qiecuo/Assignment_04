#include<iostream>
#include"Rectangle.h"
using namespace std;
int main()
{
    Rectangle r1(10,10),r2(10,5),r3;
    cout<<"length is "<<r1.getLength()<<" width is "<<r1.getWidth()
    <<" area is "<<r1.area()<<" perimeter is "<<r1.perimeter()<<endl;
     cout<<"length is "<<r2.getLength()<<" width is "<<r2.getWidth()
    <<" area is "<<r2.area()<<" perimeter is "<<r2.perimeter()<<endl;
     cout<<"length is "<<r3.getLength()<<" width is "<<r3.getWidth()
    <<" area is "<<r3.area()<<" perimeter is "<<r3.perimeter()<<endl;
    Rectangle r(10,0);
    return 0;
}
