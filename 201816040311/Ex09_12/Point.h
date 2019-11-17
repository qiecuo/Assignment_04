#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point
{
private:
    double x;//x coordinate value
    double y;//y coordinate value
public:
    Point();//default constructor of the rectangle
    Point(double,double);//default constructor of the rectangle
    void setX(double);//set x coordinate value
    void setY(double);//set y coordinate value
    double getX();//get x coordinate value
    double getY();//get y coordinate value

};

#endif // POINT_H_INCLUDED

