#include <iostream>
using namespace std;

// include definition of class Rectangle from Rectangle.h
#include "Rectangle.h"
Rectangle::Rectangle(double l,double w)
{
    setLength(l);
    setWidth(w);
}
void Rectangle::setLength(double l)
{
    if(l>=0.0&&l<=20.0)
        length=l;

}
void Rectangle::setWidth(double w)
{
    if(w>=0.0&&w<=20.0)
        width=w;
}
double Rectangle::getLength()
{
    return length;
}
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::getArea()
{
    return length*width;
}
double Rectangle::getPerimeter()
{
    return 2*(length+width);
}
