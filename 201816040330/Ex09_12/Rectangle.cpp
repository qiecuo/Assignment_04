#include <iostream>
#include "Rectangle.h"
#include "Point.h"
using namespace std;

Rectangle::Rectangle(Point l1,Point l2,Point r1,Point r2)
{
    setLength(l1,r1);
    setWidth(l1,l2);
    setArea();
    setPerimeter();
}//end Rectangle destructor


void Rectangle::setLength(Point l1,Point r1)
{
    length=r1.getX()-l1.getX();

}//end function setLength
double Rectangle::getLength()
{

    return length;

}//end function getLength
void Rectangle::setWidth(Point l1,Point l2)
{
    width=l1.getY()-l2.getY();
}//end function setWidth
double Rectangle::getWidth()
{

    return width;

}//end function getWidth
void Rectangle::setArea()
{
   double a;
   a=getWidth();
   double b;
   b=getLength();
    area=a*b;
}//end function setArea

double Rectangle::getArea()
{

    return area;

}//end function getArea
void Rectangle::setPerimeter()
{
    double a;
   a=getWidth();
   double b;
   b=getLength();
   perimeter=2*(a+b);
}//end function setPerimeter

double Rectangle::getPerimeter()
{

    return perimeter;
}//end function getPerimeter
bool Rectangle::IsSquare()
{
    double a;
   a=getWidth();
   double b;
   b=getLength();
   if(a==b)
   {
       cout<<"This rectangle is a square!"<<endl;
   }
   else
    cout<<"This rectangle is not a square!"<<endl;

}//end function IsSquare
