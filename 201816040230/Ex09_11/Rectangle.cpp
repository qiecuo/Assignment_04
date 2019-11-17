#include"Rectangle.h"
using namespace std;
#include <iostream>
Rectangle::Rectangle(double leng,double wid)
{
    setRectangle( leng, wid);
}

void Rectangle::setlength(double l)
{
if(length<=0.0||length>=20.0||width<=0.0||width>=20.0)
{
    cout<<"This is error!\n";
return;
}
    length=l;
}
double Rectangle::getlength()
{

    return length;
}
void Rectangle::setwidth(double w)
{
     if(length<=0.0||length>=20.0||width<=0.0||width>=20.0)
     {
         cout<<"This is error!\n";
        return;
     }
    width=w;
}
double Rectangle::getwidth()
{
        return width;
}
void Rectangle::setRectangle(double l,double w)
{
    length=l;
    width=w;
}
void Rectangle::print()
{
    cout<<"This is the perimiter:"<<2*(length+width)<<endl;
    cout<<"This is the area:"<<length*width<<endl;

}
