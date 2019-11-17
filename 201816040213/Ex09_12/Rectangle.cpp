#include <iostream>
#include <math.h>
#include <array>
#include "Rectangle.h" //include definition of class Rectangle from Rectangle.h
#include "Point.h" //include definition of class Point from Point.h
using namespace std;

// constructor initializes four points
Rectangle::Rectangle( Point a1, Point a2, Point a3, Point a4 )
{
    setRectangle( a1, a2, a3, a4 );
} // end Rectangle constructor

void Rectangle::setRectangle( Point a1, Point a2, Point a3, Point a4 )
{
    //Judge whether the length, width and diagonal is equal.
    if( pow(a2.getX()-a1.getX(),2)+pow(a2.getY()-a1.getY(),2) == pow(a4.getX()-a3.getX(),2)+pow(a4.getY()-a3.getY(),2)
     && pow(a3.getX()-a1.getX(),2)+pow(a3.getY()-a1.getY(),2) == pow(a4.getX()-a2.getX(),2)+pow(a4.getY()-a2.getY(),2)
     && pow(a4.getX()-a1.getX(),2)+pow(a4.getY()-a1.getY(),2) == pow(a3.getX()-a2.getX(),2)+pow(a3.getY()-a2.getY(),2))
    {
        cout<<"This is a rectangle.\n"<<endl;
        //If so,assign four points to array point.
        point[0] = a1;
        point[1] = a2;
        point[2] = a3;
        point[3] = a4;
    }
    else
        cout<<"This is not a rectangle.\n"<<endl;
}

double Rectangle::getLength( )
{
    //Judge the length of two sides, and return the longer side.
    if((pow(point[1].getX()-point[0].getX(),2)+pow(point[1].getY()-point[0].getY(),2)) > (pow(point[0].getX()-point[2].getX(),2)+pow(point[0].getY()-point[2].getY(),2)) )
        return sqrt( pow(point[1].getX()-point[0].getX(),2)+pow(point[1].getY()-point[0].getY(),2) );
    else
        return sqrt( pow(point[0].getX()-point[2].getX(),2)+pow(point[0].getY()-point[2].getY(),2) );
}

double Rectangle::getWidth( )
{
    //Judge the length of two sides, and return the shorter side.
    if((pow(point[1].getX()-point[0].getX(),2)+pow(point[1].getY()-point[0].getY(),2)) > (pow(point[0].getX()-point[2].getX(),2)+pow(point[0].getY()-point[2].getY(),2)) )
        return sqrt( pow(point[0].getX()-point[2].getX(),2)+pow(point[0].getY()-point[2].getY(),2) );
    else
        return sqrt( pow(point[1].getX()-point[0].getX(),2)+pow(point[1].getY()-point[0].getY(),2) );
}

double Rectangle::getPerimeter( )
{
    return ( getLength() + getWidth() ) * 2; // function to retrieve the perimeter
}

double Rectangle::getArea( )
{
    return getLength() * getWidth();  // function to retrieve the area
}

void Rectangle::judgeSquare()
{
    //Judge whether the length and width are equal.
    if( getLength() == getWidth() &&getLength() != 0 )
        cout<<"\nThis is a square."<<endl;
    else
        cout<<"\nThis is not a square."<<endl;
}
