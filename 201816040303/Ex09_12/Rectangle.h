#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include"Point.h"

using namespace std;

class Rectangle
{
    public:
        Rectangle(Point &, Point & , Point & , Point &);
        double getLength();
        double getWidth();
        double getPerimeter();
        double getArea();
        void squre();

    private:

        double length;
        double width;
        double perimeter;
        double area;
};

#endif
