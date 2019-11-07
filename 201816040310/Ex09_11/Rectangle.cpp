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
    if (length >= 20 || length <= 0)
    {
        cout << "Length must be set a right value" << endl;
        return;
    }
    this->length = length;
}

double Rectangle::getLength()
{
    return length;
}

void Rectangle::setWidth(double width)
{
    if (width >= 20 || width <= 0)
    {
        cout << "Width must be set a right value" << endl;
        return;
    }
    this->width = width;
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::getPerimeter()
{
    return (getWidth() + getLength()) * 2;
}
double Rectangle::getArea()
{
    return getWidth() * getLength();
}