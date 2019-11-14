#include<bits/stdc++.h>
#include"Point.h"
using namespace std;
point::point(double xx,double yy)///初始化
{
    setx(xx);
    sety(yy);
}
void point::setx(double xx)///判断有效性并修改
{
    x=(xx>=0&&xx<=20)?xx:1;
}
void point::sety(double yy)///同上
{
    y=(yy>=0&yy<=20)?yy:1;
}
double point::getx()///获取x坐标
{
    return x;
}
double point::gety()///获取y坐标
{
    return y;
}
