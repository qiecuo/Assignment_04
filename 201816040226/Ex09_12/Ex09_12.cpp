#include <iostream>
using namespace std;

// include definition of class Rectangle from Rectangle.h
#include "Rectangle.h"
#include "Point.h"
int main()
{
    int i;
    Rectangle rectangle;
    Point point;
    while(true)
    {
        point.setCoodinate();
        point.getCoodinate();
        if(point.judgeRectangle())
        {
            cout<<"长方形的长是：\n"<<rectangle.getLength()<<endl;
            cout<<"长方形的宽是：\n"<<rectangle.getWidth()<<endl;

            cout<<"矩形面积为：\n"<<rectangle.setArea()<<endl;
            cout<<"矩形周长为：\n"<<rectangle.setPerimeter()<<endl;
            cout<<"输入0退出\n";
            cin>>i;
            if(i==0)
                break;
        }
        else
        {
            cout<<"输入的坐标无法构成矩形，请重新输入！\n";
        }
    }
    return 0;
}
