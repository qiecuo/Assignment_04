#ifndef POINT_CPP_INCLUDED
#define POINT_CPP_INCLUDED

#include<cmath>
#include<stdexcept>
#include "Point.h"
#include <iostream>
using namespace std;

//实现getX函数
double Point::getX()
{
    return X;
}//end function setX

//实现gety函数
double Point::getY()
{
    return Y;
}//end function setX

void Point::setPoint(double x1, double y1)//坐标SET函数
{
    if(x1>=0&&x1<=20.0&&y1>=0&&y1<=20.0)
    {
        X=x1;Y=y1;
    }
    else
    {
        X=Y=0;
        throw invalid_argument("该点不在第一象限");
    }
}

#endif // POINT_CPP_INCLUDED
