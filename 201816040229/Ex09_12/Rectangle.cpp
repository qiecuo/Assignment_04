#include<iostream>
using namespace std;
#include"Rectangle.h"


Rectangle::Rectangle(int l, int w)
{
    setLength(l);
    setWidth(w);

}

void Rectangle::setLength(int l)
{
    length = l;

}//得到长

int Rectangle::getLength()
{
    return length;
}

void Rectangle::setWidth(int w)
{

       width = w;

}

int Rectangle::getWidth()
{
    return width;
}//得到宽

int Rectangle::Perimeter()
{
    return 2*(getWidth()+getLength()) ;

}
//计算周长
int Rectangle::Area()
{
      return getWidth()*getLength();

}
//计算面积
