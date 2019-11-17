#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "Point.h"

class Rectangle
{
public:
    Rectangle();
    Rectangle(Point,Point,Point,Point);//construction
    void setRectangle(Point,Point,Point,Point);//function of setRectangle
    void setLeftHigh(Point);//function of set LH
    void setLeftLow(Point);//function of set LL
    void setRightHigh(Point);//function of set RH
    void setRightLow(Point);//function of set RL
    Point getLeftHigh();
    Point getLeftLow();
    Point getRightHigh();
    Point getRightLow();
    void Length();//for length
    void Width();//for width
    void Perimeter();//for perimeter
    void Area();//for area
    bool Square();//function of square
    double getLength();
    double getWidth();
    double getArea();
    double getPerimeter();
private:
    Point lh;
    Point ll;
    Point rh;
    Point rl;
    double length;
    double width;
    double perimeter;
    double area;
};

#endif // RECTANGLE_H_INCLUDED
