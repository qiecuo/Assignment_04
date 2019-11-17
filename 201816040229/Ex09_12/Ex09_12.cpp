#include<iostream>
using namespace std;
#include"Point.h"
#include"Rectangle.h"
int main()
{
    Point point1(0,0);
    Point point2(0,2);
    Point point3(1,2);
    Point point4(1,0);
    int width,length;
    width=point2.Width(point1);//计算长
    length=point3.Length(point2);//计算宽
    Rectangle rectangle(length,width);
    cout<<rectangle.Perimeter()<<endl;//输出周长
    cout<<rectangle.Area()<<endl;//输出面积
}
