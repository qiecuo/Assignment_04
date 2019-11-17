#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Rectangle.h"
using namespace std;

//constructor function to initialize length and width
Rectangle::Rectangle(double a,double b)
{
    setlength(a);//calls number function to set length
    setwidth(b);//calls number function to set width
}//function end

//set length
void Rectangle::setlength(double c)
{
    if(c<0.0||c>20.0)
       length=1;
    else
       length=c;
}//end function

//set width
void Rectangle::setwidth(double d)
{
    if(d<0.0||d>20.0)
       width=1;
    else
       width=d;
}//end function

//get length
double Rectangle::getlength()
{
    return length;
}//end function

//get width
double Rectangle::getwidth()
{
    return width;
}//end function

//calculate perimeter
double Rectangle::perimeter()
{
    return 2*(length+width);
}//end function

//calculate area
double Rectangle::area()
{
    return length*width;
}//end function
