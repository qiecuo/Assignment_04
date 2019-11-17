#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "Point.h" //include definition of class Point from Point.h
#include <array>
using namespace std;

class Rectangle
{
public:
    Rectangle( Point a1, Point a2, Point a3, Point a4 ); //Rectangle constructor
    void setRectangle( Point a1, Point a2, Point a3, Point a4 );  // function to set the rectangle
    double getLength( );  // function to retrieve the length
    double getWidth( );  // function to retrieve the width
    double getPerimeter( ); // function to retrieve the perimeter
    double getArea( ); // function to retrieve the area
    void judgeSquare(); //function to judge whether it is a square
private:
    array < Point, 4 > point;
};


#endif // RECTANGLE_H_INCLUDED
