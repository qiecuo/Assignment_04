#include <iostream>
#include <cmath>
using namespace std;

// include definition of class Rectangle from Rectangle.h
#include "Rectangle.h"
Rectangle::Rectangle(int l,int w)
{
    length=l;
    width=w;
} // end Rectangle constructor

double Rectangle::getLength()
{
    return length;
}
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::setArea()
{
    return length*width;
}
double Rectangle::setPerimeter()
{
    return 2*(length+width);
}







