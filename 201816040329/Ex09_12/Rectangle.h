#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include"point.h""
#include"point.h""

#endif // RECTANGLE_H_INCLUDED

class Rectangle
{
public:

    Rectangle(point=point(0.0,1.0),point=point(1.0,1.0),point=point(1.0,0.0),point=point(0.0,0.0));
    void setCoordinate(point,point,point,point);
    void S();
    void C();
    double length();
    double width();
    bool square();

private:
 point pointk;
 point pointn;
  point pointm;
   point pointv;

};
