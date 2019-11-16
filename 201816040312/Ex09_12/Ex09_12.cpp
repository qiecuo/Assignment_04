#include<iostream>
#include"Point.h"//point类
#include"Rectangle.h"//Rectangle类
using namespace std;
int main()
{
    Point point1(2,8,8,8,8,4,2,4);//创建一个point类
    point1.judge();//判断是否为长方形
    point1.length();//获取长方形的长和宽
    point1.width();
    Rectangle rectangle1(point1);

    cout<<"perimeter:"<<rectangle1.perimeter()<<endl;//输出长方形的面积和周长
    cout<<"area:"<<rectangle1.area()<<endl;
    Point point2(2,8,8,8,8,4,2,2);
    point2.judge();
}
