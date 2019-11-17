#ifndef RECTANGLE_H
#define RECTANGLE_H
#include"Point.h"
class Rectangle{
    private:
        Point p1,p2,p3,p4;
        double length;
        double width;
    public:
        Rectangle(Point,Point,Point,Point);
        double getLength();
        double getWidth();
        double area();
        double perimeter();
        bool square();
        void setRectangle(Point,Point,Point,Point);
};
#endif
