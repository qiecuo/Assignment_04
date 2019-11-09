#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle(double length, double width) 
{
    setLength(length);
    setWidth(width);
}


void Rectangle::setLength(double length)
{
    if (length >= 20 || length <= 0) // check the length whether in a right range
    {
        cout << "Length must be set a right value" << endl; // cout an error msg
        return;
    }
    this->length = length; // store length
}

double Rectangle::getLength()
{
    return length;
}

void Rectangle::setWidth(double width)
{
    if (width >= 20 || width <= 0) // check width
    {
        cout << "Width must be set a right value" << endl; // show a error msg
        return;
    }
    this->width = width; //store width 
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::getPerimeter()
{
    return (getWidth() + getLength()) * 2; // calculate perimeter
}
double Rectangle::getArea()
{
    return getWidth() * getLength(); // calculate area
}