#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class Rectangle
{
private:
    double length;//Rectangle's length
    double width;//Rectangle's width
public:

    Rectangle();//default constructor of the rectangle
    Rectangle(double,double);//default constructor of the rectangle
    void setLength(double);//set Rectangle's length
    void setWidth(double);//set Rectangle's width
    double getLength();//get Rectangle's length
    double getWidth();//get Rectangle's width
    double perimeter();//Calculate the perimeter
    double area();//Calculate the area

};

#endif // RECTANGLE_H_INCLUDED

