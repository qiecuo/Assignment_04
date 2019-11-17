#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle
{
public:
    Rectangle(double,double);
    void setlength(double);
    double getlength();
    void setwidth(double);
    double getwidth();
    void setRectangle(double,double);
    void print();
private:
    double length;
    double width;
};
#endif
