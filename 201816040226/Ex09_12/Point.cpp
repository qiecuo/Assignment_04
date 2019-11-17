#include <iostream>
#include <cmath>
using namespace std;

// include definition of class Rectangle from Point.h
#include "Point.h"
// function to set the part number
void Point::setCoodinate( )
{
    cout<<"输入长方形四个坐标：\n";
    for(int i=0;i<4;i++)
        for(int j=0;j<2;j++)
    {
        cin>>a[i][j];
    }
} // store four points coo d i n ate

void Point::getCoodinate()
{
    cout<<"打印出输入的坐标: \n";
    for(int i=0;i<4;i++)
    {
        cout<<"("<<a[i][0]<<","<<a[i][1]<<")";
    }
   cout<<endl;
}//以坐标形式打印出
double Point::distance(double a,double b,double c,double d)
{
   double distance;
   distance=(sqrt((a-c)*(a-c)+(b-d)*(b-d)));
   return distance;
}//计算两点坐标距离
double Point::duiJiaoXian(int x)//第几个顶点
{
   int i=0;
   double longest;
   double c[4];//记下坐标之间long
   for(int i=0;i<4;i++)
   {
       c[i]=distance(a[x][0],a[x][1],a[i][0],a[i][1]);
   }
   for(i=0,longest=c[0],b[x]=0;i<4;i++)
   {
       if(c[i]>longest)
       {
           longest=c[i];//找出传入顶点与其他顶点之间距离的最大值
           b[x]=i;//记录与其对应的二维数组的行数即第几个顶点
       }
   }
   return longest;
}
bool Point::judgeEqual(int x)//传入在对角线函数中获得的x值
{
    double length=0,width=0;
    switch(x)
    {
    case 1://是点(a[1][0],a[1][1])
        if((distance(a[0][0],a[0][1],a[2][0],a[2][1])==distance(a[1][0],a[1][1],a[3][0],a[3][1]))
            &&(distance(a[1][0],a[1][1],a[3][0],a[3][1])==distance(a[0][0],a[0][1],a[2][0],a[2][1])))//判断对边是否相等
        {
            length=distance(a[0][0],a[0][1],a[2][0],a[2][1]);
            width=distance(a[1][0],a[1][1],a[3][0],a[3][1]);
            return true;
        }
    case 2:
        if((distance(a[1][0],a[1][1],a[3][0],a[3][1])==distance(a[1][0],a[1][1],a[2][0],a[2][1]))
           &&(distance(a[0][0],a[0][1],a[1][0],a[1][1])==distance(a[3][0],a[3][1],a[2][0],a[2][1])))
        {
            length=distance(a[0][0],a[0][1],a[3][0],a[3][1]);
            width=distance(a[0][0],a[0][1],a[1][0],a[1][1]);
            return true;
        }
        case 3:
        if((distance(a[0][0],a[0][1],a[1][0],a[1][1])==distance(a[3][0],a[3][1],a[2][0],a[2][1]))
           &&(distance(a[0][0],a[0][1],a[1][0],a[2][1])==distance(a[1][0],a[1][1],a[1][0],a[1][1])))
        {
            length=distance(a[0][0],a[0][1],a[1][0],a[1][1]);
            width=distance(a[0][0],a[0][1],a[2][0],a[2][1]);
            return true;//对边相等，返回真
        }
        default:
            return false;
    }
}
bool Point::judgeRectangle()
{
    if(duiJiaoXian(0)!=duiJiaoXian(1))//判断分别计算以顶点00 01 10 11对角线是否相等
        return false;
    if(duiJiaoXian(1)!=duiJiaoXian(2))
        return false;
    if(judgeEqual(b[0]))//判断对边是否相等
        return true;
    else
        return false;
}
