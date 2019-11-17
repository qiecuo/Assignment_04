#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include"Point.h"
class Rectangle
{
public:
    Rectangle(double=1,double=1);
    void setCoor(double a,double b,double c,double d,double e,double f,double g,double h);
    void judge();
    void peri();
    void area();
    void print()const;
private:
    double x1,x2,x3,x4;
    double y1,y2,y3,y4;
    double Length;
    double Width;
};
#endif // RECTANGLE_H_INCLUDED
