#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(double l,double w)
{
    setlength(l);
    setwidth(w);
}

void Rectangle::setlength(double l)
{
    if(l>=0.0 && l<=20.0) //Determine length validity
        length=l;
}
void Rectangle::setwidth(double w)
{
    if(w>=0.0 && w<=20.0) //Determine width validity
        width=w;
}
double Rectangle::getlength() const
{
    return length;
}
double Rectangle::getwidth() const
{
    return width;
}
double Rectangle::perimeter()
{
    return (getlength()+getwidth())*2;
}
double Rectangle::area()
{
    return getlength()*getwidth();
}
