// Assignment_04: Rectangle.cpp
// Member-function definitions for class Rectangle.
#include <iostream>
#include <stdexcept>
using namespace std;

#include "Rectangle.h" // include definition of class Rectangle

// Rectangle constructor initializes data member
Rectangle::Rectangle(double length,double width)
{
    setLength(length);
    setWidth(width);
}// end Rectangle constructor

void Rectangle::setLength(double length)
{
    if(length>0&&length<20) //check validity
        Length=length;
    else
        Length=0;
}// end function

double Rectangle::getLength()
{
    return Length;
}// end function

void Rectangle::setWidth(double width)
{
    if(width>0&&width<20) //check validity
        Width=width;
    else
        Width=0;
}// end function

double Rectangle::getWidth()
{
    return Width;
}// end function

double Rectangle::Perimeter()
{
    if(getLength()!=0&&getWidth()!=0)
        return 2*(getLength()+getWidth());
    else
        return 0;
}// end function

double Rectangle::Area()
{
    return getLength()*getWidth();
}// end function
