
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.h"
class Rectangle
{
   friend class Point;
public:
    double getLength(Point a); //返回长
    double getWidth(Point a);  //返回宽
    double perimeter(Point a); //返回周长
    double area(Point a);  //返回面积
    int square(Point a);  //判定正方形
};
#endif // RECTANGLE_H
