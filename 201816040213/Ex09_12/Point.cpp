#include <iostream>
#include "Point.h" //include definition of class Point from Point.h
using namespace std;

 //Point constructor
Point::Point( double x1, double y1)
{
    setPoint( x1,y1 );
}  //end Point constructor

void Point::setPoint( double a, double b )
{
    //Set to 0 if two points are out of range
    if( (a<0||a>20.0)||(b<0||b>20.0) )
    {
        cout<<"There are some points not in the first quadrant . Please reset.\n"<<endl;
        x = 0; y = 0;
    }
    //If two points are in range, assign a to x, assign b to y.
    else
    {
        x = a;
        y = b;
    }
}

double Point::getX()
{
    return x; // function to retrieve the X coordinate
}

double Point::getY()
{
    return y; // function to retrieve the Y coordinate
}
