#include <iostream>

using namespace std;
#include"Rectangle.h"
Rectangle::Rectangle(double a,double b)
{
    setLength(a);
    setWidth(b);
}
void Rectangle::setLength(double a)
{
    if(a<20&&a>0)
    Length=a;
    else
     cout<<"Length should at between 0 and 20";
}
double Rectangle::getLength()
{
    return Length;
}
void Rectangle::setWidth(double a)
{
    if(a<20&&a>0)
    Width=a;
    else
     cout<<"Width should at between 0 and 20";
}
double Rectangle::getWidth()
{
    return Width;
}
void Rectangle::area()
{
    cout<<"the area is"<<Length*Width<<endl;
}
void Rectangle::area(double a,double b)
{
    cout<<"the area is"<<a*b<<endl;
}
void Rectangle::peri()
{
    cout<<"the perimemter"<<2*(Length+Width)<<endl;
}
void Rectangle::peri(double a,double b)
{
    cout<<"the perimemter"<<2*(a+b)<<endl;
}
void Rectangle::print()const
{
    cout<<"the length is:"<<Length<<endl;
    cout<<"the width is:"<<Width<<endl;
}

