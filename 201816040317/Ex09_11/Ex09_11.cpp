#include <iostream>
using namespace std;

#include "Rectangle.h"
#include "Point.h"

int main()
{
    double a,b;
    Rectangle r(0,0);
    cout<<"The length is :";
    cin>>a;
    cout<<"The width is :";
    cin>>b;

    r.setLength(a);
    r.setWidth(b);

    cout<<"The area is :"<<r.Area()<<endl;
    cout<<"The perimeter is :"<<r.Perimeter()<<endl;
}
