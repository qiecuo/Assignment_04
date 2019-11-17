#include <stdexcept>
#include <iostream>
#include "coordinate.h"
using namespace std;

Coordinate::Coordinate()
{
}

Coordinate::Coordinate(double xcoor,double ycoor)
{
    setx(xcoor);
    sety(ycoor);
}
void Coordinate::setx(double Xcoor)
{
    if(x>20.0||x<0.0)
    {
        cout<<"This is error"<<endl;
        return;
    }
    x=Xcoor;
}
double Coordinate::getx()
{
    return x;
}
void Coordinate::sety(double Ycoor)
{
    if(y>20.0||y<0.0)
    {
        cout<<"This is error"<<endl;
        return;
    }
    y=Ycoor;
}
double Coordinate::gety()
{
    return y;
}
