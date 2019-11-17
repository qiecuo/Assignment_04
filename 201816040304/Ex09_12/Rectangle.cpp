#ifndef RECTANGLE_CPP_INCLUDED
#define RECTANGLE_CPP_INCLUDED

#include "Rectangle.h"
#include "Point.h"
#include<cmath>
#include<stdexcept>
#include <iostream>

using namespace std;

// 构造函数初始化对象
Rectangle::Rectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    setP(x1,y1,x2,y2,x3,y3,x4,y4);
    Length=calculateLength();
    Width=calculateWidth();
}// end function Rectangle

// 实现setPoint函数
void Rectangle::setP(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    A.setPoint(x1,y1);
    B.setPoint(x2,y2);
    C.setPoint(x3,y3);
    D.setPoint(x4,y4);
    if(!judgeRectangle())
        cout << "改四个点构不成矩形";
}// end function Rectangle

//实现getLength函数
double Rectangle::getLength()
{
    return Length;
}//end function setLength

//实现getWidth函数
double Rectangle::getWidth()
{
    return Width;
}//end function getWidth

// 实现calculatePerimeter函数
double Rectangle::calculatePerimeter()
{
    return 2*(Length+Width);
}// end function calculatePerimeter

// 实现calculateArea函数
double Rectangle::calculateArea()
{
    return Length*Width;
}// end function calculateArea

//判断正方形
void Rectangle::Square()
{
    if(Length==Width)
        cout<<"该图形是正方形";
    cout<<"该图形不是正方形";
}//end function Square

//判断矩形
bool Rectangle::judgeRectangle()
{
    double X1,X2,X3,X4,Y1,Y2,Y3,Y4;
    X1=A.getX();Y1=A.getY();
    X2=B.getX();Y2=B.getY();
    X3=C.getX();Y3=C.getY();
    X4=D.getX();Y4=D.getY();
    double x5=(X1+X2+X3+X4)/4;
    double y5=(Y1+Y2+Y3+Y4)/4;
    double distance1,distance2,distance3,distance4;
    distance1 = pow((y5-Y1),2)+pow((x5-X1),2);
    distance2 = pow((y5-Y2),2)+pow((x5-X2),2);
    distance3 = pow((y5-Y4),2)+pow((x5-X3),2);
    distance4 = pow((y5-Y4),2)+pow((x5-X4),2);
    if(distance1==distance2&&distance3==distance4&&distance2==distance3)
        return true;
    return false;
}
// 计算宽度函数
double Rectangle::calculateWidth()
{
    double X1,X2,X3,Y1,Y2,Y3;
    X1=A.getX();Y1=A.getY();
    X2=B.getX();Y2=B.getY();
    X3=C.getX();Y3=C.getY();
    double edge1,edge2;
    double Min;
    edge1=pow((Y3-Y1),2)+pow((X3-X1),2);
    edge2=pow((Y2-Y1),2)+pow((X2-X1),2);
    Min=pow((Y3-Y2),2)+pow((X3-X2),2);
    if(edge1<Min)
        Min=edge1;
    if(edge2<Min)
        Min=edge2;
    return sqrt(Min);
}
// 计算长度函数
double Rectangle::calculateLength()
{
    double X1,X2,X3,Y1,Y2,Y3;
    X1=A.getX();Y1=A.getY();
    X2=B.getX();Y2=B.getY();
    X3=C.getX();Y3=C.getY();
    double edge1,edge2,edge3;
    edge1=pow((Y3-Y1),2)+pow((X3-X1),2);
    edge2=pow((Y2-Y1),2)+pow((X2-X1),2);
    edge3=pow((Y3-Y2),2)+pow((X3-X2),2);
    if((edge1<=edge3&&edge1>=edge2)||(edge1>=edge3&&edge1<=edge2))
        return sqrt(edge1);
    if((edge2<=edge3&&edge2>=edge1)||(edge2>=edge3&&edge2<=edge1))
        return sqrt(edge2);
    return sqrt(edge3);
}

#endif // RECTANGLE_CPP_INCLUDED
