#include <iostream>
#include <iomanip>
using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle()
{
   length=1;
   width=1;
}

double Rectangle::calcperimeter()
{
    return 2*length+2*width;
}

double Rectangle::calcarea()
{
    return length*width;
}

void Rectangle::setlength(double x)
{
    length=x;
}

double Rectangle::getlength()
{
    return length;
}

void Rectangle::setwidth(double x)
{
    width=x;
}

double Rectangle::getwidth()
{
    return width;
}

bool Rectangle::judge()
{
    if(length>=0.0&&length<=20.0&&width>=0.0&&length<=20.0)
        return true;
    return false;
}


