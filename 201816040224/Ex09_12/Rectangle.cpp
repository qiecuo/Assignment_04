#include <iostream>
//using std::cout;
//using std::endl;
#include<iomanip>
//using std::fixed;
//using std::setprecision;
#include <cmath>
//using std::fabs;
#include "Rectangle.h"
Rectangle::Rectangle(Point a,Point b,Point c,Point d)
{
    setCoord(a,b,c,d);
}
void Rectangle::setCoord(Point p1,Point p2,Point p3,Point p4)
{
    if((p1.getY()==p2.getY()&&p1.getX()==p4.get()&&p2.getX()==p3.getX()&&p3.getY()==p4.getY()))
    {
        point1 = p1;
        point2 = p2;
        point3 = p3;
        point4 = p4;
    }//end if
    else
    {
        cout<<"输入的坐标值不能够形成一个矩形！\n"
        point1 = Point(0.0,1.0);
        point2 = Point(1.0,1.0);
        point3 = Point(1.0,0.0);
        point4 = Point(0.0,0.0);
    }
}//end funtion setCoord
double Rectangle::length()
{
    double side1 = fabs(point4.getY() - point1.getY());//一边的长度
    double side2 = fabs(point2.getX() - point1.getX());//边的长度
    double length = (side1 > side2?side1 : side2);
    return length;
}
double Rectangle::width()
{
    double side1 = fabs(point4.getY() - point1.getY());
    double side2 = fabs(point2.getX() - point1.getX());
    double width = (side1 < side2?side1 : side2);
    return width;
}
void Rectangle::perimeter()
{
    cout<<"\n周长是:"<<setprecision(1)<<2*(length()+width())<<endl;
}

void Rectangle::area()
{
    cout<<"面积是:"<<setprecision(1)<<length()*width()<<endl;
}
bool Rectangle::square()
{
    return(fabs(point4.getY() - point1.getY())==fabs(point2.getX() - point1.getX()));
}
