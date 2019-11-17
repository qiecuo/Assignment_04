// Assignment_04: Rectangle.cpp
// Member-function definitions for class Rectangle.
#include <iostream>
#include <stdexcept>
using namespace std;

#include "Rectangle.h" // include definition of class Rectangle

// Rectangle constructor initializes data member
Rectangle::Rectangle(Point &topLeft,Point &topRight,Point &lowLeft,Point &lowRight)
{
    setPoint(topLeft,topRight,lowLeft,lowRight);
}

void Rectangle::setPoint(Point &topLeft,Point &topRight,Point &lowLeft,Point &lowRight)
{
    if(topLeft.checkPoint_TheFirstQuadrant()&&topRight.checkPoint_TheFirstQuadrant()
       &&lowLeft.checkPoint_TheFirstQuadrant()&&lowRight.checkPoint_TheFirstQuadrant())
    {
        if(topLeft.getY()==topRight.getY()&&topLeft.getX()==lowLeft.getX()
           &&lowLeft.getY()==lowRight.getY()&&topRight.getX()==lowRight.getX())
        {
            TopLeft = topLeft;
            TopRight = topRight;
            LowLeft = lowLeft;
            LowRight = lowRight;
        }
        else
            throw invalid_argument("Please enter valid coordinates!!!");
    }
    else
        throw invalid_argument("Please enter valid coordinates!!!");
}

double Rectangle::getLength() const
{
    return TopRight.getX() - TopLeft.getX();
}

double Rectangle::getWidth() const
{
    return TopRight.getY() - LowRight.getY();
}

double Rectangle::getPerimeter() const
{
    return (getLength() + getWidth()) * 2;
}

double Rectangle::getArea() const
{
    return getLength() * getWidth();
}

bool Rectangle::isSquare() const
{
    if(getLength()==getWidth())
        return true;
    else
        return false;
}
