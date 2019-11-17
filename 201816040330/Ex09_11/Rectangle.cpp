#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(double le,double wi)
{
    setLength(le);
    setWidth(wi);
}

void Rectangle::getPerimeter(double le,double wi)
{
    double perimeter;
    perimeter=2*(le+wi);
    cout<<"Perimeter: "<<perimeter<<endl;
}

void  Rectangle::getArea(double le,double wi)
{
    double area;

     area=le*wi;
     cout<<"Area: "<<area<<endl;

}

void Rectangle::setLength(double le)
{
    if(le>20.0&&le<0.0)
        length=le;


}

double Rectangle:: getLength()
{
     return length;
}
void Rectangle:: setWidth(double wi)
{
    if(wi>0.0&&wi<20.0)
        width=wi;

}
double Rectangle::getWidth()
{
    return width;
}
