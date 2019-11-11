#include "Rectangle.h"
#include<iostream>
using namespace std;
Rectangle::Rectangle(double length_pere,double width_pere)//to initialize the length and the width of the object
:length(length_pere),width(width_pere)
{

}
void Rectangle::setLength(double length)//to set the length of the Rectangle
{
    if(length>0&&length<20)
        this->length=length;
}
void Rectangle::setWidth(double width)//to set the width of the Rectangle
{
    if(width>0&&width<20)
        this->width=width;
}
double Rectangle::getLength()const//to get the length of the Rectangle
{
    return length;
}
double Rectangle::getWidth()const//to get the width of the Rectangle
{
    return width;
}
void Rectangle::perimeter()//to calculate the perimeter of the Rectangle
{
    cout<<"Perimeter of the Rectangle is:"<<2*getLength()+2*getWidth()<<endl<<endl;
}
void Rectangle::area()//to calculate the area of the Rectangle
{
    cout<<"Area of the Rectangle is:"<<getLength()*getWidth()<<endl<<endl;
}
