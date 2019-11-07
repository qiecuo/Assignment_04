//
//  Rectangle.cpp
//  ass4-11
//
//  Created by MacBook on 2019/11/4.
//  Copyright © 2019 MacBook. All rights reserved.
//

#include "Rectangle.hpp"
#include <iostream>
#include <cmath>
using namespace std;
Rectangle::Rectangle(){
    setWidth(1.0);
    setLenth(1.0);
}
Rectangle::Rectangle(double a,double b){
    setLenth(a);
    setWidth(b);
}
Rectangle::Rectangle(point p1,point p2,point p3,point p4){
    setPoint(p1,p2,p3,p4);
}
void Rectangle::setLenth(double a){
    if(0<=a<=20.0)
        lenth=a;
    else
        throw invalid_argument("长度错误");
}
void Rectangle::setWidth(double a){
    if(0<=a<=20.0)
        width=a;
    else
        throw invalid_argument("宽度错误");
}
void Rectangle::setPoint(point p1,point p2,point p3,point p4){
if(0.0<=p1.x<20.0&&0.0<=p1.y<20.0&&0.0<=p2.x<20.0&&0.0<=p2.y<20.0&&0.0<=p3.x<20.0&&0.0<=p3.y<20.0&&0.0<=p4.x<20.0&&0.0<=p4.y<20.0){
    if(fabs(p1.x-p2.x)==fabs(p3.x-p4.x) && fabs(p3.y-p2.y)==fabs(p1.y-p4.y)){
        setLenth(fabs(p3.x-p4.x));
        setWidth(fabs(p1.y-p2.y));
    }else if(fabs(p1.x-p3.x)==fabs(p2.x-p4.x) && fabs(p2.y-p1.y)==fabs(p4.y-p3.y)){
        setLenth(fabs(p4.x-p2.x));
        setWidth(fabs(p1.y-p3.y));
    }else{
        throw invalid_argument("error");
    }
}else{
    throw invalid_argument("长度不对");
}
}
double Rectangle::getArea(){
    return lenth*width;
}
double Rectangle::getPerimeter(){
    return (lenth+width)*2;
}
bool Rectangle::isSquare(){
    if (lenth==width) {
        return true;
    }else return false;
}
