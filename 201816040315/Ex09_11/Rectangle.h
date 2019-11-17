//Rectangle.h
//Rectangle class definition
//Member function are defined in Rectangle.h
//prevent multiple inclusions of header
#ifndef RECTANGLE_H
#define RECTANGLE_H

//Rectangle class definition
class Rectangle
{
public:
    Rectangle(double = 1,double = 1 );//Declare data member
    void setWidth(double);//function set width
    void setLength(double);//function set length
    double getWidth();//function retrieve width
    double getLength();//function retrieve length
    double gainPerimeter();//function to calculate perimeter
    double gainArea();//function to calculate area
private:
    double width;//width for rectangle
    double length;//length for rectangle
};

#endif // RECTANGLE_H
