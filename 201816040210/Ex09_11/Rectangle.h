#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class Rectangle
{
public:
    Rectangle( double = 1, double = 1 );//constructor function
    void setWidth( double );//function to set width
    double getWidth();//function to get width
    void setLength( double );//function to set length
    double getLength();//function to get length
    double perimeter();//function to calculate the perimeter
    double area();//function to calculate area
private:
    double width;
    double length;
};


#endif // RECTANGLE_H_INCLUDED
