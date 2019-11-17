#include <iostream>
#include "Point.h"

using namespace std;
Point::Point()
{

}
Point::Point(double a,double b)
{
    setPoint(a,b);
}//end of construction function

void Point::setPoint(double a,double b)
{
    setX(a);
    setY(b);
}//function of setPoint()

void Point::setX(double a)
{
    if(a>0&&a<=20.0)
    {
        x=a;
    }
    else
    {
          x=0;
    }

}//function of setX

void Point::setY(double b)
{
     if(b>0&&b<=20.0)
    {
        y=b;
    }
       else
    {
          y=0;
    }
}//function of setY

double Point::getX()
{
    return x;
}//function of getX

double Point::getY()
{
    return y;
}//function of getY


