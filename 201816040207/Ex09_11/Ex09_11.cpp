#include <iostream>
#include"Rectangle.h"
using namespace std;

int main()
{
    Rectangle r(2,4);//初始化定义
    int perimeter,area,width,length;//周长，面积，宽，长
    width = r.getwidth();
    length = r.getlength();
    perimeter=r.perimeter();
    area = r.area();
    //打印出相关变量的值
    cout<<"this width is :"<<width<<endl;
    cout<<"this length is :"<<length<<endl;
    cout<<"this perimeter is :"<<perimeter<<endl;
    cout<<"this area is :"<<area<<endl;

    return 0;
}
