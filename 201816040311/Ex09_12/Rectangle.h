#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class Rectangle
{
private:
    double length;
    double width;
public:
    Rectangle();
    Rectangle(double,double);
    //set Rectangle's width and length
    void setLength(double);
    void setWidth(double);
    //get Rectangle's width and length
    double getLength();
    double getWidth();
    //get perimeter and area
    double perimeter();
    double area();
    bool square(const Rectangle);

};

#endif // RECTANGLE_H_INCLUDED

