//header file for class rectangle
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.h"

class Rectangle
{
public:
    Rectangle(Point q,Point w,Point e,Point r);//define constructor
    void setRec(Point ,Point ,Point ,Point );//function set rectangle's point
    double getPerimeter();//retrieve perimeter
    double getArea();//retrieve area
    double getLength();//retrieve length
    double getWidth();//retrieve width
    void square();//judge whether the rectangle is square
private:
    Point One,Two,Three,Four;//four points for rectangle
};

#endif // RECTANGLE_H
