#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(Point a,Point b,Point c,Point d)
{
    setPoint(a,b,c,d);
}
void Rectangle::setPoint(Point a,Point b,Point c,Point d)
{
    if(a.m()&&b.m()&&c.m()&&d.m())
    {
        if(a.getx()==c.getx() && c.gety()==d.gety() && b.getx()-a.getx()==d.getx()-c.getx() &&a.gety()-c.gety()==b.gety()-d.gety())   //Determine whether the four input points form a rectangle
        {
            tLeft=a; //Assign a to tLeft
            lLeft=c; //Assign c to lLeft
            tRight=b; //Assign b to tRight
            lRight=d; //Assign d to lRight
        }
    }
}
double Rectangle::getLength()const //Take the large value as the length
{
    double i,j;
    i=tLeft.gety()-lLeft.gety();
    j=tRight.getx()-tLeft.getx();
    if(i>=j)
        return i;
    else
        return j;
}
double Rectangle::getWidth() const //Take the small value as the width
{
    double i,j;
    i=tLeft.gety()-lLeft.gety();
    j=tRight.getx()-tLeft.getx();
    if(i>=j)
        return j;
    else
        return i;
}
double Rectangle::getarea() const //With area
{
    return (tLeft.gety()-lLeft.gety())*(tRight.getx()-tLeft.getx());
}
double Rectangle::getperimeter() const  //For the perimeter
{
    return (tLeft.gety()-lLeft.gety()+tRight.getx()-tLeft.getx())*2;
}
bool Rectangle::square() const //Determine whether the four points form a square or not
{
    if(getLength()==getWidth())
        return true;
    else
        return false;
}
