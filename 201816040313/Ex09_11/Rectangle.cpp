#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(double leng, double wid)
{
    setlength(leng);
    setwidth(wid);
}
void Rectangle::setlength(double l)
{
    if(l>0.0&&l<20.0)
    {
        length=l;
    }
    else
    {
        throw invalid_argument(" length must be 0.0~20.0");
    }
}
void Rectangle::setwidth(double w)
{
    if(w>0.0&&w<20.0)
    {
        width=w;
    }
    else
    {
        throw invalid_argument(" width must be 0.0~20.0");
    }
}
double Rectangle::getlength()//get length
{
    return length;
}
double Rectangle::getwidth()//get width
{
    return width;
}
double Rectangle::calperimeter(double result1)//calculate perimeter
{
    result1 = (length+width)*2;
    return result1;
}
double Rectangle::calarea(double result2)//calculate area
{
    result2 = length*width;
    return result2;
}
