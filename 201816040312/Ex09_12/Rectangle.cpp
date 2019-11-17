//Rectangle
#include<iostream>
#include"Point.h"
#include"Rectangle.h"
using namespace std;

Rectangle::Rectangle(const Point &m)
 :complex(m)
{

}
double Rectangle::perimeter()//返回长方形的周长
{
    return 2*(complex.getwidth()+complex.getlength());
}
double Rectangle::area()//返回长方形的面积
{
    return complex.getwidth()*complex.getlength();
}
