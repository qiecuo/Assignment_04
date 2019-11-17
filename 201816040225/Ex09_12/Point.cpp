#include<iostream>
#include"Point.h"
Point::Point(double f_x,double f_y)//constructor Point
{
    x=f_x;
    y=f_y;
}
void Point::setx(double f_x)//function setx
{
    x=f_x;
}
double Point::getx()//function getx
{
    return x;
}
void Point::sety(double f_y)//function sety
{
    y=f_y;
}
double Point::gety()//function gety
{
    return y;
}
bool Point::judgePoint()//judge the useless or not
{
    return (x>0.0&&x<20.0)&&(y>0.0&&y<20.0);
}
bool Point::judgeEqual(Point &a)//judge weather they are equal
{
    if(a.x==x&&y==a.y)
        return false;
    else
        return true;
}



