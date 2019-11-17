#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle rectangle(1.1,1.1);

    //rectangle.setLength();
    //rectangle.setWidth();
    cout<<"长方形的长是：\n"<<rectangle.getLength()<<endl;
    cout<<"长方形的宽是：\n"<<rectangle.getWidth()<<endl;

    cout<<"矩形面积为：\n"<<rectangle.getArea()<<endl;
    cout<<"矩形周长为：\n"<<rectangle.getPerimeter()<<endl;
    return 0;
}
