#include <iostream>
#include "Rectangle.h"
#include "Point.h"
#include<math.h>
using namespace std;

double Rectangle::getLength(Point a)
{
    double q = fabs(a.getX1() - a.getX2());
    double w = fabs(a.getX1() - a.getX3());
    double e = fabs(a.getY1() - a.getY2());
    double r = fabs(a.getY1() - a.getY2());

    if(q != 0)
        if(e != 0)
            return q >= e ? q : e;
    if(q != 0)
        if(r != 0)
            return q >= r ? q : r;
    if(w != 0)
        if(e != 0)
            return w >= e ? w : e;
    if(w != 0)
        if(r != 0)
            return w >= r ? w : r;
}

double Rectangle::getWidth(Point a)
{
    double q = fabs(a.getX1() - a.getX2());
    double w = fabs(a.getX1() - a.getX3());
    double e = fabs(a.getY1() - a.getY2());
    double r = fabs(a.getY1() - a.getY2());

    if(q != 0)
        if(e != 0)
            return q <= e ? q : e;
    if(q != 0)
        if(r != 0)
            return q <= r ? q : r;
    if(w != 0)
        if(e != 0)
            return w <= e ? w : e;
    if(w != 0)
        if(r != 0)
            return w <= r ? w : r;
}


int Rectangle::square(Point a)
{
    if(this->getLength(a) == this->getWidth(a))
        return 1;
    else
        return 0;
}
double Rectangle::area(Point a)
{
    return this->getLength(a)*this->getWidth(a);
}

double Rectangle::perimeter(Point a)
{
    return 2*(this->getLength(a)+this->getWidth(a));
}
