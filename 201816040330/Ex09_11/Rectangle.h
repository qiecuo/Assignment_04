#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include <iostream>
class Rectangle
{
public:
    explicit Rectangle(double,double);
    void getPerimeter(double,double);
    void getArea(double,double);
    void  setLength(double);
    double getLength();
    void setWidth(double);
    double getWidth();
private:
    double length;
    double width;
};

#endif // RECTANGLE_H_INCLUDED
