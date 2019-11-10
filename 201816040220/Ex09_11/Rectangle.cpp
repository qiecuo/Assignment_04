
#include <iostream>
using namespace std;

#include "Rectangle.h" 

Rectangle::Rectangle(float length,float wide)
{
 setLength(length);
 setWidth(wide);
}

void  Rectangle::setLength(float length)          //set length
{
    if(length>0.0&&length<20.0)
        length1=length;
    else
        length1=0;
}

float  Rectangle::getLength()                   //get length
{
    return length1;
}

void  Rectangle::setWidth(float width)          //set width
{
    if(width>0.0&&width<20.0)
        width1=width;
    else
        width1=0;
}

float  Rectangle::getWidth()                      //get width
{
    return width1;
}


float  Rectangle::perimeter(float a,float b)         //Circumference calculation
{
    perimeter1=2*(a+b);
    return perimeter1;
}

float  Rectangle::area(float a,float b)                  //Calculated area
{
    area1=a*b;
    return area1;
}
