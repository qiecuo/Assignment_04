//Rectangle类的实现
#include<iostream>

using namespace std;
#include"Rectangle.h"
Rectangle::Rectangle()//默认的无参构造函数
{
    length=1;//将初始值赋给长方形的长和宽
    width=1;
}
Rectangle::Rectangle(double m,double n)//有参数的构造函数
{
    setlength(m);
    setwidth(n);
}
void Rectangle::setlength(double a)
{
    if(a>0&&a<20)
      length=a;
}
double Rectangle::getlength()
{
    return length;
}
void Rectangle::setwidth(double b)
{
    if(b>0&&b<20)
      width=b;
}
double Rectangle::getwidth()
{
    return width;
}
double Rectangle::perimeter()//计算长方形的周长
{
    return 2*(width+length);
}
double Rectangle::area()//计算长方形的面积
{
    return width*length;
}
