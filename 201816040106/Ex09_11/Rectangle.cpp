#include<iostream>
#include<iomanip>
#include<stdexcept>
#include<ctime>
#include"Rectangle.h"
using namespace std;
Rectangle::Rectangle(double initialLength,double initialWidth)
{
    setLength(initialLength);
    setWidth(initialWidth);
}
void Rectangle::setLength(double len)
{
    if(len>0&&len<20)
        length=len;
    else
        throw invalid_argument("length must be 0~20");
}
void Rectangle::setWidth(double w)
{
    if(w>0&&w<20)
        width=w;
    else
        throw invalid_argument("width must be 0~20");
}
double Rectangle::getLength()
{
    return length;
}
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::area()
{
    return width*length;
}

double Rectangle::perimeter()
{
    return width*2+length*2;
}
