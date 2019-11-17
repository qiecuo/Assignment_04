#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "Point.h"

using namespace std;


class Rectangle
{
public :
    explicit Rectangle(Point,Point,Point,Point);//constructor
    void setLength(Point,Point);//set length
    void setPerimeter();//set perimeter
    void setArea();//set area
    void setWidth(Point,Point);//set width
    double getLength();//return length
    double getWidth();//return width
    double getArea();//return area
    double getPerimeter();//return perimeter
    bool IsSquare();//adjust square or rectangle

private:
    Point l1;
    Point l2;
    Point r1;
    Point r2;
    double length;
    double width;
    double area;
    double perimeter;



};


#endif // RECTANGLE_H_INCLUDED
