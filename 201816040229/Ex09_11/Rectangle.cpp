#include <iostream>

using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle(int l, int w)
{
    setLength(l);
    setWidth(w);

}

void Rectangle::setLength(int l)
{
    if(l>0&&l<20)
    {
       length = l;
    }

}
//获取长方形的长
int Rectangle::getLength()
{
    return length;
}

void Rectangle::setWidth(int w)
{
    if(w>0&&w<20)
    {
       width = w;
    }
}
//获取长方形的宽
int Rectangle::getWidth()
{
    return width;
}

int Rectangle::Perimeter()
{
    return 2*(getWidth()+getLength()) ;

}
//计算长方形的周长
int Rectangle::Area()
{
      return getWidth()*getLength();

}
//计算长方形的面积
