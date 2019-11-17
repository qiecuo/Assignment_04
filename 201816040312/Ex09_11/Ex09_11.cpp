#include<iostream>

using namespace std;
#include"Rectangle.h"

int main()
{
    Rectangle rectangle1;//创建一个类
    cout<<"length:"<<rectangle1.getlength()<<endl;//输出长方形的长
    cout<<"width:"<<rectangle1.getwidth()<<endl;//输出长方形的宽
    cout<<"perimeter:"<<rectangle1.perimeter()<<endl;//计算长方形的周长
    cout<<"area:"<<rectangle1.area()<<endl;//计算长方形的面积
    rectangle1.setlength(10);//改变长方形的长和宽
    rectangle1.setwidth(16);;
    cout<<"length:"<<rectangle1.getlength()<<endl;
    cout<<"width:"<<rectangle1.getwidth()<<endl;
    cout<<"perimeter:"<<rectangle1.perimeter()<<endl;
    cout<<"area:"<<rectangle1.area()<<endl;
}
