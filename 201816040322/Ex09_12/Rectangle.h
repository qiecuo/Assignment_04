// Assignment_04: Rectangle.h
// Definition of Rectangle class.
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"

class Rectangle
{
public:
    Rectangle(Point &,Point &,Point &,Point &); // constructor function

    //function to set
    void setPoint(Point &,Point &,Point &,Point &);

    //function to get
    double getLength() const;
    double getWidth() const;

    double getPerimeter() const;// return the Rectangle's perimeter
    double getArea() const;// return the Rectangle's area

    bool isSquare() const;// whether it's a square or not

private:
    // data member
    Point TopLeft;
    Point TopRight;
    Point LowLeft;
    Point LowRight;

}; // end class Rectangle

#endif // RECTANGLE_H


