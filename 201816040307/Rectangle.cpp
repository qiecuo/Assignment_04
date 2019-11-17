#include "Rectangle.h"
#include<iostream>
using namespace std;
Rectangle::Rectangle(double  l, double  w)
{
    //......
    setFuction(l, w);
}

void Rectangle::setFuction(double  l,double  w)
{
    //verify the length and width are each floating-point numbers that 0.0 and less that 20.0
    if(l >= 0.0 and l <= 20.0 and w >= 0.0 and w <= 20.0)
    {
        length = l;
        width = w;
    }
}

double  Rectangle::getLength()const
{
    return length;//return length
}

double  Rectangle::getWidth()const
{
    return width;//return the value of width
}

void Rectangle::setLength(const double  l)
{
    if(l <= 20.0 and l >= 0.0)
        length = l;
    else
        cout<<"Error!The length must be 0.0 - 20.0"<<endl;//wrong input
}

void Rectangle::setWidth(const double  w)
{
    if(w >= 0.0 and w <= 20.0)
        width = w;
    else
        cout<<"Error!The width must be 0.0 - 20.0"<<endl;
}

//function perimeter
double  Rectangle::Perimeter()
{
    return 2 * (length + width);
}

//function area
double  Rectangle::Area()
{
    return length * width;
}

