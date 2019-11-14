#include<bits/stdc++.h>
#include"Rectangle.h"
using namespace std;

Rectangle::Rectangle(double len,double wid)
{
    setwidth(wid);
    setlength(len);
}
void Rectangle::setlength(double len)
{

    length=(len>=0&&len<=20)?len:1;
}
void Rectangle::setwidth(double wid)
{
    width=(wid>=0&&wid<=20)?wid:1;
}
double Rectangle::getlength()
{
    return length;
}
double Rectangle::getwidth()
{
    return width;
}
double Rectangle::area()
{
    return width*length;
}
double Rectangle::perimeter()
{
    return (width+length)*2;
}
