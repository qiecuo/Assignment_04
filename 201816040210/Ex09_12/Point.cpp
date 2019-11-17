#include <iostream>

using namespace std;
#include "Point.h"
//constructor function
Point::Point( double xx,double yy )
{
    setPoint( xx , yy );
}//end function
//function to set point
void Point::setPoint( double xx,double yy )
{
    setX( xx );
    setY( yy );
}//end function
//function to set x
void Point::setX( double a )
{
    if(a>=0&&a<=20)//judge x 0-20
        x=a;
    else
        throw invalid_argument("x must be 0-20");
}//end function
//function to set y
void Point::setY( double a )
{
    if(a>=0&&a<=20)//judge y 0-20
        y=a;
    else
        throw invalid_argument("y must be 0-20");
}//end function
//function to get x
double Point::getX()
{
    return x;
}//end function
//function to get y
double Point::getY()
{
    return y;
}//end function
