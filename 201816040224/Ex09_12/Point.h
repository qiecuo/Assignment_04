#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point
{
public:
    point(double = 0.0,double = 0.0);
    void setX(double);
    void setY(double);
    double getX();
    double getY();
private:
    double x;
    double y;
};

#endif // POINT_H_INCLUDED
