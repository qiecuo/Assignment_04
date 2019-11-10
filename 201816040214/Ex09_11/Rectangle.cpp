#include <iostream>
#include "Rectangle.h"

using namespace std;
//build a constructor ,and default length and width as 1
Rectangle::Rectangle()
{
    setLength(1);
    setWidth(1);
}
//set the value of length between 0 and 20,or it will be 1
void Rectangle::setLength(double length1)
{
    length = (length1 > 0 && length1 < 20) ? length1 : 1;
}

double Rectangle::getLength() const
{
    return length;
}
//set the value of width between 0 and 20,or it will be 1
void Rectangle::setWidth(double width1)
{
    width = (width1 > 0 && width1 < 20) ? width1 : 1;
}

double Rectangle::getWidth() const
{
    return width;
}
//calculator perimeter
double Rectangle::perimeter()
{
    return length + width;
}
//calculator area
double Rectangle::area()
{
    return length * width;
}
