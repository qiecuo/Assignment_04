#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class Rectangle
{

public:
    Rectangle(double=1,double=1);
    void setLength(double);
    double getLength();
    void setWidth(double);
    double getWidth();
    void peri(double,double);
    void peri();
    void area(double,double);
    void area();
    void print()const;
private:
    double Length;
    double Width;
};

#endif // RECTANGLE_H_INCLUDED
