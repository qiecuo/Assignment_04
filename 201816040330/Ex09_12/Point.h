#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point
{
public:
    Point();
    explicit Point(double,double);//constructor
    void setPoint(double,double);
    void setX(double);//set x
    void setY(double);//set y
    double getX();//return x
    double getY();//return y
private:
    double x;
    double y;
};

#endif // POINT_H_INCLUDED
