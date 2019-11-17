#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "Point.h"

class Rectangle
{
public:
    Rectangle( double = 1, double = 1 ,double = 1,double = 1,double = 1,double = 1,
              double=1,double = 1);//constructor function
    void Judge();//function to judge rectangle
    void Square();//function to judge square
    double Length();//function to calculate length
    double Width();//function to calculate width
    double perimeter();//function to calculate perimeter
    double area();//function to calculate area
    void printPoint();//function to print point
private:
    Point point[5];
};


#endif // RECTANGLE_H_INCLUDED
