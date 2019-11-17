// Assignment_04: Point.cpp
// Member-function definitions for class Point.
#include <iostream>
#include "Point.h"

std::istream & operator>>(std::istream &input,Point &point)
{
    input.ignore();
    input >> point.x;
    input.ignore();
    input >> point.y;
    input.ignore();
    return input;
}

Point::Point(double x,double y)
{
    this->x=x;
    this->y=y;
}

double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

bool Point::checkPoint_TheFirstQuadrant() const
{
    if(getX()>0 && getY()>0 && getX()<20 && getY()<20)
        return true;
    else
        return false;
}
