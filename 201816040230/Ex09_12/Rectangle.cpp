#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdexcept>
#include "Rectangle.h"
using namespace std;
Rectangle::Rectangle(Coordinate m,Coordinate n,Coordinate l,Coordinate p)
{
    setCoor(m,n,l,p);
}
void Rectangle::setCoor(Coordinate m,Coordinate n,Coordinate l,Coordinate p)
{
    if(m.getx()==n.getx()&&m.gety()==p.gety()&&n.gety()==l.gety()&&l.getx()==p.getx())
    {
        Coordinate1=m;
        Coordinate2=n;
        Coordinate3=l;
        Coordinate4=p;

    }
}
double Rectangle::length()
{
    double x1,x2,length;
x1=fabs(Coordinate3.getx()-Coordinate2.getx());
x2=fabs(Coordinate2.gety()-Coordinate1.gety());
if(x1>x2)
{
    length=x1;
}
else
{
    length=x2;
}
return length;
}
double Rectangle::width()
{
    double y1,y2,width;
    y1=fabs(Coordinate2.gety()-Coordinate1.gety());
    y2=fabs(Coordinate3.getx()-Coordinate2.getx());
    if(y1<y2)
    {
        width=y1;
    }
    else
    {
        width=y2;
    }
    return width;
}
void Rectangle::area()
{
    cout<<"This is the area:"<<length()*width()<<endl;
}
void Rectangle::perimeter()
{
    cout<<"This is the perimeter:"<<2*(length()+width())<<endl;
}
bool Rectangle::checksquare()
{
    {if(length()==width());
    return true;
    }
    return false;
    }
