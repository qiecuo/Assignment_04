#include <iostream>
using namespace std;
#include "Rectangle.h"

int main()
{
    Point p1(2,4),p2(4,4),p3(2,2),p4(4,2);
    Rectangle rectangle(p1,p2,p3,p4);  //Initializes the four points of the rectangle
    cout<< rectangle.getLength()<<rectangle.getWidth()<<rectangle.getperimeter()<<rectangle.getarea();   //Output the length, width, circumference, and area of the rectangle
    if(rectangle.square())
        cout<<"It is a square";
    else
        cout<<"It is not a square";
    return 0;
}
