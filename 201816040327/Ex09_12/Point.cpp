//
//  Point.cpp
//  Ex09_12
//
//  Created by misonomayubw on 2019/11/17.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include "main.h"
#include <iostream>

//构造h函数point
Point::Point(double inx,double iny)
{
    x=inx;
    y=iny;
}

//成员函数
//设定x
void Point::setx(double inx)
{
    //set x
    x=inx;
}
//成员函数
double Point::getx()
{
    //get x
    return x;
}
//设定y
void Point::sety(double iny)
{
    //set x
    y=iny;
}
//成员函数
double Point::gety()
{
    // get x
    return y;
}
