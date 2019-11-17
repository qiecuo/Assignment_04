#include <iostream>
#include"Point.h"
using namespace std;

int main()
{
    int perimeter,area,width,length;
    Rectangle Rectangle(3,4);
    width = Rectangle.getwidth();
    length = Rectangle.getlength();
    perimeter = Rectangle.perimeter();
    area = Rectangle.area();

    Rectangle.setFillCharacter('~');//Draw a border with "~"
    Rectangle.setFillPerimeterCharacter('*');//Draw the inside with "*"
    Rectangle.draw();//print figure

    cout<<"this Rectangle width is :"<<width<<endl;
    cout<<"this Rectangle length is :"<<length<<endl;
    cout<<"this Rectangle perimeter is :"<<perimeter<<endl;
    cout<<"this Rectangle area is :"<<area<<endl;

    return 0;
}
