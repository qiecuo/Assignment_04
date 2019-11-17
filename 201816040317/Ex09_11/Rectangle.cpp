#include <iostream>
using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle(double le,double wi)
{
    setRectangle(le,wi);
}//end of function Rectangle

void Rectangle::setRectangle(double le,double wi)
{
    setLength(le);
    setWidth(wi);
}//end of function setRectangle

void Rectangle::setLength(double le)
{
    if(le>0.0&&le<20.0)
    {
            length=le;
    }
    else
    {
        length=0;

    }
}//end  of function setLength

void Rectangle::setWidth(double wi)
{
    if(wi>0.0&&wi<20.0)
    {
        width=wi;
    }
   else
    {
        width=0;
    }

}//end of function setWith

double Rectangle::getLength()
{
    return length;
}//end of function getLength

double Rectangle::getWidth()
{
    return width;
}//end of function getWith

double Rectangle::Perimeter()
{
    perimeter=(getLength()+getWidth())*2;
    return perimeter;
}

double Rectangle::Area()
{
    area=getLength()*getWidth();
    if(area==0)
    {
        cout<<"The width or length is wrong"<<endl;
    }
    return area;
}
