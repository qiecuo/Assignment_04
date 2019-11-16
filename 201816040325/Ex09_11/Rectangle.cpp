#include<iostream>

#include "Rectangle.h"
using namespace std;
Rectangle::Rectangle(double L,double w)
{
    setLength(L);
    setWidth(w);
}

void Rectangle::setLength(double L)
{
    if(L>0.0&&L<20.0)//判断长度的有效性
    {
        length=L;
    }
    else
    {
        throw invalid_argument("The range of L is beyond.");
    }
}

double Rectangle::getLength()
{
    return length;
}

void Rectangle::setWidth(double w)
{
    if(w>0.0&&w<20.0)//判断宽度的有效性
    {
        width=w;
    }
    else
    {
        throw invalid_argument("The range of w is beyond.");
    }
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::Perimeter()
{
    return length+width;
}

double Rectangle::Area()
{
    return length*width;
}
