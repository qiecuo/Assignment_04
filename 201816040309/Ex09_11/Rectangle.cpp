#include <iostream>

using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle(double l,double w)
{
    bool state = verifydate(l,w);
    if(state == false)
    {
        cout<<"date is Invalid";     //constructor
    }
    else
    {
        setwidth(w);
        setlength(l);
    }

}
void Rectangle::setwidth(double w)
{
    width = w;
}
void Rectangle::setlength(double l)
{
    length = l;
}
double Rectangle::getsquare()
{
    return width*length;     //get_square
}
double Rectangle::getcircumference()
{
    return width*2+length*2;    //get_circumference
}

