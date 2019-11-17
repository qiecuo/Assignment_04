#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(double a, double b)
    :length(a), width(b)
{

}

void Rectangle::setLength(double a)
{
    if(judge(a))
        length = a;
}

void Rectangle::setWidth(double a)
{
    if(judge(a))
        width = a;
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getWidth()
{
    return width;
}

int Rectangle::judge(double a)
{
    if(a > 0.0 && a < 20.0)
        return 1;
    else
        return 0;
}

double Rectangle::perimater(double a, double b)
{
    return 2*(a+b);
}

double Rectangle::area(double a, double b)
{
    return a*b;
}


