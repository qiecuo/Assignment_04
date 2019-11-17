#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include"Point.h"

class Rectangle
{
public:
    Rectangle(Point,Point,Point,Point);//constructor function
    //set functions
    void setlength(Point ,Point);
    void setwidth(Point, Point);
    //set function
    double getlength();
    double getwidth();
    //judge function
    bool isRectangle(Point ,Point,Point,Point);//judge is rectangle or not
    bool isSquare();//judge is square or not

    double perimeter();
    double area();
private:
    double length;
    double width;
};

#endif // RECTANGLE_H_INCLUDED
