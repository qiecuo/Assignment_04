#include<iostream>
#include"Rectangle.h"
#include"Point.h"
using namespace std;
int main()
{
    Rectangle a;//object of Rectangle
    a.show();//display
    a.Assign(10,20,30,40);//the Point number
    a.show();
    cout<<"the width is: "<<left1-left2<<endl;//output the width
    cout<<"the length is: "<<right1-right2<<endl;//output the length
    cout<<"the area is ："<<a.area()//use the area function
    <<"the perimeter is ： "<<a.perimeter()<<endl;//use the perimeter function
    return 0;
}
