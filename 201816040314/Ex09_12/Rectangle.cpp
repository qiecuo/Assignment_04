#include "Rectangle.h"
#include<iostream>
using namespace std;
Rectangle::Rectangle(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)//default constructor of the class Rectangle
:point(x1,y1,x2,y2,x3,y3,x4,y4)
{

}
void Rectangle::setLength(double length)//to get the length of the Rectangle
{
    //if(length>0&&length<20)
        this->length=length;
}
void Rectangle::setWidth(double width)//to get the width of the Rectangle
{
    //if(width>0&&width<20)
        this->width=width;
}

double Rectangle::getLength()//to set the length of the Rectangle
{
    return length;
}
double Rectangle::getWidth()//to set the width of the rectangle
{
    return width;
}
void Rectangle::perimeter()//to calculate the perimeter of the rectangle
{
    cout<<"Perimeter of the Rectangle is:"<<2*getLength()+2*getWidth()<<endl<<endl;
}
void Rectangle::area()//to calculate the perimeter of the rectangle
{
    cout<<"Area of the Rectangle is:"<<getLength()*getWidth()<<endl<<endl;
}
void Rectangle::culLength()//to calculate the length of the rectangle
{
    length=point.pointLength();
}
void Rectangle::culWidth()//to calculate the width of the rectangle
{
    width=point.pointWidth();
}
bool Rectangle::square()//to judge the rectangle whether it is a square
{
    if(getLength()==getWidth())
        return true;
    else
        return false;
}
void Rectangle::display()// to print the detail
{
    point.pointDisplay();
}
