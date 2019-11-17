#include<iostream>
#include"Rectangle.h"//definition class Rectangle
using namespace std;
Rectangle::Rectangle(double l,double t,double r,double b)//the constructor
{
    setRec(l,t,r,b);//setRec style
}
void Rectangle::Assign(double l,double t,double r,double b)//Assign function
{
    left1=l;
    left2=t;
    right1=r;
    right2=b;
}
double Rectangle::getleft1()//getleft1 function
{
    return left1;
}
double Rectangle::getleft2()//getleft2 function
{
    return left2;
}
double Rectangle::getright1()//getright1 function
{
    return right1;
}
double Rectangle::getright2()//getright2 function
{
    return right2;
}
double Rectangle::area()//calculator the area
{
    return (left1-left2)*(right1-right2);
}
double Rectangle::perimeter()//calculator the perimeter
{
    return 2*(fabs(left1-left2)+fabs(right1-right2));
}
void Rectangle::show()//display the result
{
    cout<<"the left1,2 is: "<<left1<<" "<<left2<<endl;
    cout<<"the right1,2 is: "<<right1<<" "<<right2<<endl;
}
