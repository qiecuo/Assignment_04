#include<iostream>
#include"Rectangle.h"
#include"Point.h"
using namespace std;
int main()
{
    Point p1(1,3),p2(1,1),p3(3,1),p4(3,3);
    Rectangle r(p1,p2,p3,p4);
    cout<<"length is "<<r.getLength()<<" width is "<<r.getWidth()<<" area is "<<r.area()<<" permeter is "<<r.perimeter()<<endl;
    cout<<r.square()<<endl;
    return 0;
}
