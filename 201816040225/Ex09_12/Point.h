#include<iostream>
#ifndef POINT_H
#define POINT_H

class Point//define the class Point
{
public:
    Point();
    Point(double f_x,double f_y);
    bool judgePiont();//judge the requirement
    bool judgeEqual(Point &a);//judge weather they are equal
    void setx(double f_x);//set y
    void sety(double f_y);//set x
    double getx();//get x
    double gety();//get y
private://data members
    double x;
    double y;
};
#endif // POINT_H
