#ifndef RECTANGLE_CPP_INCLUDED
#define RECTANGLE_CPP_INCLUDED

#include "Rectangle.h"

using namespace std;

// 构造函数初始化对象
Rectangle::Rectangle(double length , double width)
{
    setLength(length);
    setWidth(width);
}// end function Rectangle

// 实现setLength函数
void Rectangle::setLength(double length)
{
    if(length<0.0 || length>20.0)
        length=1.0;
    Length=length;
}// end function setLength

// 实现getLength函数
double Rectangle::getLength()
{
    return Length;
}// end function getLength

// 实现setWidth函数
void Rectangle::setWidth(double width)
{
    if(width<0.0 || width >20.0 )
        width=1.0;
    Width=width;
}// end function setWidth

// 实现getWidth函数
double Rectangle::getWidth()
{
    return Width;
}// end function getWidth

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

#endif // RECTANGLE_CPP_INCLUDED
