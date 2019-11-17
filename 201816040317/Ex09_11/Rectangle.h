#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

using namespace std;

class Rectangle
{
public:
    Rectangle(double,double);//construction function
    void setRectangle(double ,double);//setRectangle
    void setLength(double);//set length
    void setWidth(double);//set width
    double getWidth();//get width
    double getLength();//get length
    double Perimeter();
    double Area();
private:
    double length;
    double width;
    double perimeter;
    double area;
};

#endif // RECTANGLE_H_INCLUDED
