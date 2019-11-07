#include "Point.h"
#include <iostream>
using namespace std;
Point::Point(double x, double y)
{
    setX(x);
    setY(y);
}

Point::Point()
{
}

void Point::setX(double c)
{
    x = c;
}

void Point::setY(double c)
{
    y = c;
}

double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}