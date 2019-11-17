#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED



#endif // RECTANGLE_H_INCLUDED

class Rectangle
{
public:
    Rectangle(double=1.0,double=1.0);
    void setLength(double L);
    double getLength();
    void setWidth(double W);
    double getWidth();
    double S();
    double C();
private:
    double length;
    double width;
};
