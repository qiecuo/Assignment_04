#include <iostream>

#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle a(8.2,21.0);//定义一个对象a，并初始化它的长和宽分别为8.2，10.4

    cout << "The perimeter of rectangle is " << a.Perimeter()<<endl;//输出长方形的周长
    cout << "The area of rectangle is "<<a.Area()<<endl;//输出长方形的面积
}
