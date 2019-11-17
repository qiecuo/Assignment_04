#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class Rectangle
{
public:
    //set functions
    Rectangle(double =1,double =1);//constructor function
    void setlength(double);//set length
    void setwidth(double);//set width

    //get functions
    double getlength();//get length
    double getwidth();//get width
    double perimeter();//a function of calculate the perimeter of the rectangle
    double area();//a function of calculate the area of the rectangle

private:
    double length;
    double width;
};

#endif // RECTANGLE_H_INCLUDED
