// Lab 1: Rectangle.cpp
// Member-function definitions for class Rectangle.
#include <iostream>
using namespace std;

#include "Rectangle.h" // include definition of class Rectangle
Rectangle::Rectangle( double length,double width )
{
    setLength(length);
    setWidth(width);
} 

void Rectangle::setLength(double len)
{
    if(len>0.0&&len<20.0)
    {
        length=len;
    }
} 

double Rectangle::getLength()
{
    //double len;
    return length;
}

void Rectangle::setWidth(double wid)//判断参数是否合格
{
    if(wid>0.0&&wid<20.0)
    {
        width=wid;
    }
}
double Rectangle::getWidth()
{
    //double wid;
    return width;
}
double Rectangle::getPerimeter()//返回周长
{
    //double per;
    //per=length + width;
    return (length + width)*2;
}
double Rectangle::getArea()//返回面积
{
    //are=length*width;
    return length*width;
}
