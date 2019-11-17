#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "Point.h"
class Rectangle
{
public:
    Rectangle(Point,Point,Point,Point);//constructor function(four coordinates)
    explicit Rectangle(double=0,double=0);////constructor function(lengh and width)
    int judgeRectangle(double,double,double,double);//judge whether it is a rectangle
    int square(double,double,double,double);//judge whether it is a square
    double calculatelength(double,double);//calculate lengh
    double calculatelwidth(double,double);//calculate width
    double calculateperimeter(double,double,double,double,double,double);//calculate perimeter
    double calculatearea(double,double,double,double,double,double);//calculate area
    double getlengh();
    double getwidth();
private:
    Point xpointdata1;
    Point ypointdata1;
    Point xpointdata2;
    Point ypointdata2;
    Point xpointdata3;
    Point ypointdata3;
    Point xpointdata4;
    Point ypointdata4;
    double lengh;
    double width;

};


#endif // RECTANGLE_H_INCLUDED
