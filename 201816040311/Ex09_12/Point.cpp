#include "Point.h"
#include <iostream>

using namespace std;
//default constructor of the rectangle
Point::Point()
{

}

//default constructor of the rectangle
Point::Point(double a,double b)
{
    if(a > 0.00&& a <20.00 &&b > 0.00&& b <20.00)
    {
        setX(a);
        setY(b);
    }
    else
    {
        cout << "error:your input is illegal!!!!!!!" <<  endl;
    }
}

//set x coordinate value
void Point::setX(double a)
{
    x=a;
}

//set y coordinate value
void Point::setY(double b)
{
    y=b;
}

//get x coordinate value
double Point::getX()
{
    return x;
}

//get y coordinate value
double Point::getY()
{
    return y;
}


