#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Point.h"

using namespace std;
//constructor function
//calls number function to set variables
Point::Point(double a,double b)
{
    setx(a);//calls set x
    sety(b);//calls set y
}//end function
//set x
void Point::setx(double c)
{
    if(c<0.0||c>20.0)
        throw invalid_argument("x must be range 0 to 20");
    else

        x=c;
}//end function
// set y
void Point::sety(double d)
{
    if(d<0.0||d>20.0)
       throw invalid_argument("x must be range 0 to 20");
    else
        y=d;
}//end function
