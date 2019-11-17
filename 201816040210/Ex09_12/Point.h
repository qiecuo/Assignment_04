#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point
{
public:
    Point( double=1,double=1 );//constructor function
    void setPoint( double , double );//function to set point
    void setX( double );//function to set x
    void setY( double );//function to set y
    double getX();//function to get x
    double getY();//function to get y
private:
    double x;
    double y;
};


#endif // POINT_H_INCLUDED
