#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle rect(4,4,8,4,4,2,8,2);//create an object rect
    rect.display();//call to the display function
    rect.culLength();//call to the culLength function
    rect.culWidth();//call to the culWidth function
    rect.perimeter();//call to the perimeter function
    rect.area();//call to the area function
    if(rect.square())//to judge the result of square function
        cout<<"The Rectangle is square"<<endl;
    else
        cout<<"The Rectangle is not square"<<endl;

    Rectangle rect2(4,4,6,4,4,2,6,2);//create an object rect2
    rect2.display();//call to the display function
    rect2.culLength();//call to the culLength function
    rect2.culWidth();//call to the culWidth function
    rect2.perimeter();//call to the perimeter function
    rect2.area();//call to the area function
    if(rect2.square())//to judge the result of square function
        cout<<"The Rectangle is square"<<endl;
    else
        cout<<"The Rectangle is not square"<<endl;
    return 0;
}
