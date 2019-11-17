
#include <iostream>
using namespace std;

#include "Rectangle.h" // include definition of class Rectangle 


int main()
{
    float a,b;

    Rectangle rectangle;           

    cout<<"请输入长度和宽度：";                    
    cin>>a>>b;

    rectangle.setLength(a);                    //set length
    rectangle.setWidth(b);                    //set width

    if(rectangle.getLength()==0||rectangle.getWidth()==0)               //judge weather out of range
        cout<<"边长超出边界";
    else
        cout<<"周长为："<<rectangle.perimeter(a,b)<<" "                    //output
            <<"面积为："<<rectangle.area(a,b);

    return 0;
}
