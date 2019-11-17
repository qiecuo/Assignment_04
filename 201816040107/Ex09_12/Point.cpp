#include <iostream>
#include "Point.h"

Point::Point(double a,double b)
{
    setx(a);
    sety(b);
}
Point::setx(double a)
{
    x=a;
}
double Point::getx()
{
    return x;
}
Point::sety(double b)
{
    y=b;
}
double Point::gety()
{
    return y;
}
