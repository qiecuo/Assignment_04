#include<bits/stdc++.h>
#ifndef POINT_H
#define POINT_H 0

class point
{
public:
    point(double=1.0,double =1.0);///初始化
    void setx(double);///修改x坐标
    void sety(double );///修改y坐标
    double getx();///获取x坐标
    double gety();///获取y坐标
private :
    double x,y;
};
#endif
