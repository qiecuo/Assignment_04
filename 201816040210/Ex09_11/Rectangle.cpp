#include <iostream>
#include <stdexcept>
using namespace std;
#include "Rectangle.h"
//constructor function
Rectangle::Rectangle( double w, double l )
{
    setWidth( w );
    setLength( l );
    cout << "Rectangle object constructor: "<<width<<' '<<length<<endl;
}//end function
//function to set width
void Rectangle::setWidth( double wi )
{
    if( wi<=20&&wi>=0 )//judge width 0-20
    {
        width = wi;
    }
    else
    {
        throw invalid_argument( "width must be 0-20" );
    }
}//end function
//function to set length
void Rectangle::setLength( double le )
{
    if( le<=20&&le>=0 )//judge length 0-20
    {
        length = le;
    }
    else
    {
        throw invalid_argument( "length must be 0-20" );
    }
}//end function
//function to get width
double Rectangle::getWidth( )
{
    return width;
}//end function
//function to get length
double Rectangle::getLength( )
{
    return length;
}//end function
//function to calculate perimeter
double Rectangle::perimeter()
{
    return 2*(width+length);
}//end function
//function to calculate area
double Rectangle::area()
{
    return length*width;
}//end function
