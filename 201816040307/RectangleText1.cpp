#include<iostream>
#include"Rectangle.h"

using namespace std;

int main()
{
    Rectangle r1;//create object1 named r1 without argument
    Rectangle r2(4.0, 7.0);//create object2 named r2 with two arguments
    //show info of r2
    cout<<"The length of r2 is: "<<r2.getLength()<<endl;
    cout<<"The width of r2 is: "<<r2.getWidth()<<endl;
    cout<<"The perimeter of r2 is: "<<r2.Perimeter()<<endl;
    cout<<"The area of r2 is: "<<r2.Area()<<endl;

    //set the length and width of r1
    r1.setLength(6);
    r1.setWidth(9.3);
    cout<<"Set r1's length and width as 6, 9.3"<<endl;
    cout<<endl;

    //show the info r1
    cout<<"The length of r2 is: "<<r1.getLength()<<endl;
    cout<<"The width of r2 is: "<<r1.getWidth()<<endl;
    cout<<"The perimeter of r2 is: "<<r1.Perimeter()<<endl;
    cout<<"The area of r2 is: "<<r1.Area()<<endl;
}
