#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle rect(10,10);//create an object
    cout<<"The length of the Rectangle is:"<<rect.getLength()<<endl; //print the length of the Rectangle
    cout<<"The Width of the Rectangle is:"<<rect.getWidth()<<endl<<endl; //print the width of the Rectangle
    rect.perimeter(); //print the perimeter of the Rectangle
    rect.area();//print the area of the Rectangle
    rect.setLength(15); //set the length of the rectangle
    rect.setWidth(15); //set the width of the Rectangle

    cout<<"The length of the Rectangle is:"<<rect.getLength()<<endl; //print the length of the Rectangle
    cout<<"The Width of the Rectangle is:"<<rect.getWidth()<<endl<<endl; //print the width of the Rectangle
    rect.perimeter(); //print the perimeter of the Rectangle
    rect.area(); //print the area of the Rectangle
    return 0;
}
