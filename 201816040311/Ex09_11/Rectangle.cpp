#include <iostream>
#include "Rectangle.h"

using namespace std;
//default constructor of the rectangle
Rectangle::Rectangle()
{
    setLength(1);
    setWidth(1);
}
//default constructor of the rectangle
Rectangle::Rectangle(double a, double b)
{
    setLength(a);
    setWidth(b);
}
//set Rectangle's length
void Rectangle::setLength(double a)
{
    if(a > 0.0 && a<20.0)
    {
        length=a;
    }
    else
    {
        cout<<"error:Length Input nonspecification!"<<endl;
        length=1;
    }

}
//set Rectangle's width
void Rectangle::setWidth(double b)
{
    if(b > 0.0 && b <20.0)
    {
        width=b;
    }
    else
    {
        cout<<"error:Width Input nonspecification!"<<endl;
        width=1;
    }

}
//get Rectangle's length
double Rectangle::getLength()
{
    return length;
}
//get Rectangle's width
double Rectangle::getWidth()
{
    return width;
}

//Calculate the area
double Rectangle::area()
{
    return length*width;
}

//Calculate the perimeter
double Rectangle::perimeter()
{
    return (length+width)*2;
}

