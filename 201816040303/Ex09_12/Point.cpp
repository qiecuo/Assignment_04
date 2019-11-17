#include <iostream>
#include"Point.h"

using namespace std;

Point::Point(double x0,double y0)
{
    setX(x0);
    setY(y0);
};

void Point::setX(double x0)
{
    x = x0;
};

double Point::getX()
{
    return x;
};

void Point::setY(double y0)
{
    y = y0;
};

double Point::getY()
{
    return y;
};

