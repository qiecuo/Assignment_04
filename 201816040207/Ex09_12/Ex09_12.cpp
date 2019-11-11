#include <iostream>
#include"Rectangle.h"
using namespace std;

int main()
{
    Rectangle r(5,2);
    int perimeter,area,width,length;
    width = r.getwidth();
    length = r.getlength();
    perimeter=r.perimeter();
    area = r.area();
    cout<<"this width is :"<<width<<endl;
    cout<<"this length is :"<<length<<endl;
    cout<<"this perimeter is :"<<perimeter<<endl;
    cout<<"this area is :"<<area<<endl;
    r.setFillCharacter('*');//用*作为外部的符号
    r.setFillPerimeterCharacter('$');//用$作为内部的符号
    r.draw();//打印图形
    return 0;
}
