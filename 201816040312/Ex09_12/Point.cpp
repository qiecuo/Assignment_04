//point
#include<iostream>
#include"Point.h"

using namespace std;
Point::Point(double c1,double d1,double c2,double d2,double c3,double d3,double c4,double d4)
{
//对四个点进行赋值
    setpoint1(c1,d1);
    setpoint2(c2,d2);
    setpoint3(c3,d3);
    setpoint4(c4,d4);
}
void Point::setpoint1(double c1,double d1)//对第一个点赋值
{
    if(c1<=20&&d1<=20&&c1>0&&d1>0)
        {
           a1=c1;
           b1=d1;
        }
    else
        cout<<"error input"<<endl;

}
/*double Point::getpoint1()
{
    return a1,b1;
}*/
void Point::setpoint2(double c1,double d1)//对第二个点赋值
{
    if(c1<=20&&d1<=20&&c1>0&&d1>0)
        {
           a2=c1;
           b2=d1;
        }
    else
        cout<<"error input"<<endl;
}
/*double Point::getpoint2()
{
    return a2,b2;
}*/
void Point::setpoint3(double c1,double d1)//对第三个点赋值
{
    if(c1<=20&&d1<=20&&c1>0&&d1>0)
        {
           a3=c1;
           b3=d1;
        }
    else
        cout<<"error input"<<endl;
}
/*double Point::getpoint3()
{
    return a3,b3;
}*/
void Point::setpoint4(double c1,double d1)//对第四个点赋值
{
    if(c1<=20&&d1<=20&&c1>0&&d1>0)
        {
           a4=c1;
           b4=d1;
        }
    else
        cout<<"error input"<<endl;
}
/*double Point::getpoint4()
{
    return a4,b4;
}*/
void Point::judge()//判断是否为长方形
{
    if(a1==a4&&b1==b2&&a2==a3&&b3==b4)
        cout<<"It is a rectangle"<<endl;
    else
        {
            cout<<"It isn't a rectangle"<<endl;
        }
}
void Point::length()//获取长方形的长
{
    length1=a2-a1;
}
double Point::getlength()
{
    return length1;
}
void Point::width()//获取长方形的宽
{
    width1=b1-b4;
}
double Point::getwidth()
{
    return width1;
}
