#ifndef POINT_H
#define POINT_H

class Point
{
    friend class Rectangle;
public:
    Point(double, double, double, double, double, double, double, double);
    void setNumber(double, double, double, double, double, double, double, double);
    double getX1();
    double getX2();
    double getX3();
    double getY1();
    double getY2();
    double getY3();
    double getX4();
    double getY4();
private:
    double x1, x2, x3, x4, y1, y2, y3, y4;
};
#endif // POINT_H
