#include<iostream>
#include<iostream>
#include<cmath>
#include"Rectangle.h"
using std::fixed;
using std::fabs;
using std::setprecision;

Rectangle::Rectangle(point a,point b,point c,point d)
{
    setCoordinate(a,b,c,d);
}
void Rectangle::setCoordinate(point t1,point t2,point t3,point t4)
{
    if((t1.getY()==t2.getY())&&t1.getX()=t4.getX()&&t2.getX()==t3.getX()&&t3.getY()==t4.getY())

    {
        pointk=t1;
        pointn=t2;
        pointm=t3;
        pointv=t4;
    }
    else
    {
        cout<<"坐标不能组成一个长方形"

    }
}
void Rectangle::C()
{
    cout<<fixed<<"\n c=:"<<setprecision(1)<<2*length()+2*width();
}
void Rectangle::S()
{
    cout<<fixed<<"/n s="<<setprecision(1)<<width()*length();
}
    double Rectangle::length()
    {
       double  L1=fabs(pointv.getY()-pointk.getY());
       double L2=fabs(pointn.getX()-pointm,getX());
       double length=(L1>L2?L1:L2);
       return length;
    }
double Rectangle::width()
{
double  L1=fabs(pointv.getY()-pointk.getY());
       double L2=fabs(pointn.getX()-pointm,getX());
       double width=(L1<L2?L1:L2);
       return width;
}
bool Rectangle::square()
{
    return(fabs(pointn.getX-pointk.getX())==fabs(pointv.getY()-pointk.getY()));
}
