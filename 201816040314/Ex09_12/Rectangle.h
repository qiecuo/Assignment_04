#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "Point.h"
class Rectangle
{
public:
    Rectangle(double=2,double=2,double=4,double=2,double=2,double=1,double=4,double=1);//default constructor of the class Rectangle
    double getLength();//to get the length of the Rectangle
    double getWidth();//to get the width of the Rectangle
    void setLength(double);//to set the length of the Rectangle
    void setWidth(double);//to set the width of the rectangle
    void perimeter();//to calculate the perimeter of the rectangle
    void area();//to calculate the perimeter of the rectangle
    void culLength();//to calculate the length of the rectangle
    void culWidth();//to calculate the width of the rectangle
    bool square();//to judge the rectangle whether it is a square
    void display();// to print the detail
private:
    Point point;//a point object
   double length;//data number length
   double width;//data number width

};


#endif // RECTANGLE_H_INCLUDED
