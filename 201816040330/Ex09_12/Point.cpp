#include <iostream>
#include "Point.h"
using namespace std;

Point::Point()
{
    setPoint(x,y);

}//end Point destructor

Point::Point(double x,double y)
{
    setPoint(x,y);
}//end Point destructor

void Point::setX(double x1)
{
    x=x1;
}//end function setX

void Point::setY(double y1)
{
    y=y1;
}//end function setY

double Point::getX()
{
    return x;
}//end function getX

double Point::getY()
{
    return y;
}//end function getY
void Point::setPoint(double x,double y)
{
    if(x>0&&y>0&&x<20.0&&y<20.0)//adjust a and y
    {
        setX(x);
    setY(y);
    }

}//end function setPoint
