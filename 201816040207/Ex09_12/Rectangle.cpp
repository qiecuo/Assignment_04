#include<iostream>
#include"Rectangle.h"

Rectangle::Rectangle(int length,int width)//使用其他函数进行初始化
{
    setlength(length);
    setwidth(width);
}
int Rectangle::perimeter()
{
    int perimeter;
    perimeter = 2*lengthdata+2*widthdata;//计算周长
    return perimeter;
}
int Rectangle::area()
{
    int area;
    area = lengthdata*widthdata;//计算面积
    return area;
}
void Rectangle::setlength(int length)
{
    lengthdata = length;
}
void Rectangle::setwidth(int width)
{
    widthdata = width;
}
int Rectangle::getlength()
{
    return lengthdata;//返回长度
}
int Rectangle::getwidth()
{
    return widthdata;//返回宽度
}




