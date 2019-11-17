#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(double a ,double b)
{
    setx(a);
    sety(b);
}
double Point::getx() const
{
    return x;
}
double Point::gety()const
{
    return y;
}
void Point::setx(double a)
{
    x=a;
}
void Point::sety(double b)
{
    y=b;
}
bool Point::m() const
{
    if(getx()>0 && getx()<=20 && gety()>0 && gety()<=20) //To determine the validity of x and y
        return true;
    else
        return false;
}
