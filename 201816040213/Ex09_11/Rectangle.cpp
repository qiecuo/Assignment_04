#include <iostream>
#include "Rectangle.h" //include definition of class Rectangle from Rectangle.h
using namespace std;

//Rectangle constructor
Rectangle::Rectangle( double l, double w )
{
    setLength( l );
    setWidth( w );
} // end Rectangle constructor

void Rectangle::setLength( double len )
{
    if(len>0.0 && len<20.0) //The len range must be between 0 and 20
        length = len;
    else
    {
        cout<<"The length is out of range. Reset to 0"<<endl;
        length = 0;
    }
}

double Rectangle::getLength( )
{
    return length;
}

void Rectangle::setWidth( double wid )
{
    if(wid>0.0 && wid<20.0) //The len range must be between 0 and 20
        width = wid;
    else
    {
        cout<<"The width is out of range. Reset to 0"<<endl;
        width = 0;
    }

}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::getPerimeter()
{
    return (length + width) * 2 ; //Returns the perimeter of the rectangle
}

double Rectangle:: getArea()
{
    return length * width ; //Returns the area of the rectangle
}
