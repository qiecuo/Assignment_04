#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED


class Point
{
public:
    Point();
    Point(double,double);//construction of point
    void setPoint(double,double);//setPoint
    void setX(double);//function of setX
    void setY(double);//function of setY
    double getX();//function of getX
    double getY();//function of getY
private:
    double x;
    double y;

};

#endif // POINT_H_INCLUDED
