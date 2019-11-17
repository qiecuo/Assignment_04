#include<iostream>
#include"Point.h"
#include<math.h>
Point::Point(int left,int right)
{
     setleftPart(left);
     setrightPart(right);
}
void Point::setleftPart(int left)
{
    leftPart=left;
}
void Point::setrightPart(int right)
{
    rightPart=right;

}
int Point::getleftPart()
{
    return rightPart;
}
int Point::getrightPart()
{
    return leftPart;
}
Point Point:: Width(const Point&a)
{
    width=sqrt((leftPart-a.leftPart)*(leftPart-a.leftPart)+(rightPart-a.rightPart)*(rightPart-a.rightPart));

}//计算长方形的宽
Point Point::Length(const Point&a)
{
    length=sqrt((leftPart-a.leftPart)*(leftPart-a.leftPart)+(rightPart-a.rightPart)*(rightPart-a.rightPart));
}//计算长
