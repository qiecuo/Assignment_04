#include <iostream>
#include "Rectangle.h"
#include "Point.h"
using namespace std;
Rectangle::Rectangle(Point p1,Point p2,Point p3,Point p4)//定义构造函数；
{
	set(p1,p2,p3,p4);
}
void Rectangle::set(Point p1,Point p2,Point p3,Point p4)
{
    if(p1.getx()!=p3.getx() || p2.getx()!=p4.getx())
    {
        throw invalid_argument("x is invalid");
    }
    else if(p1.gety()!=p2.gety() || p3.gety()!=p4.gety())
    {
        throw invalid_argument("y is invalid");
    }
    else
    {
    double x1,x2,x3,x4;
     if(p1.getx()>0 && p1.getx()<=20.0 )
    {

        x1=p1.getx();

    }
    else
    {
        throw invalid_argument("x is invalid");
    }
     if(p2.getx()>0 && p2.getx()<=20.0 )
    {

        x2=p2.getx();

    }
    else
    {
        throw invalid_argument("x is invalid");
    }
     if(p3.getx()>0 && p3.getx()<=20.0 )
    {

        x3=p3.getx();

    }
    else
    {
        throw invalid_argument("x is invalid");
    }
     if(p4.getx()>0 && p4.getx()<=20.0 )
    {

        x4=p4.getx();

    }
    else
    {
        throw invalid_argument("x is invalid");
    }
    length=x2-x1;
    double y1,y2,y3,y4;
    if(p1.gety()>0 && p1.gety()<=20.0 )
    {

        y1=p1.gety();

    }
    else
    {
        throw invalid_argument("y is invalid");
    }
    if(p2.gety()>0 && p2.gety()<=20.0 )
    {

        y2=p2.gety();

    }
    else
    {
        throw invalid_argument("y is invalid");
    }
    if(p3.gety()>0 && p3.gety()<=20.0 )
    {

        y3=p3.gety();

    }
    else
    {
        throw invalid_argument("y is invalid");
    }
    if(p4.gety()>0 && p4.gety()<=20.0 )
    {

        y4=p4.gety();

    }
    else
    {
        throw invalid_argument("y is invalid");
    }
    width=y1-y3;
    }
}

double Rectangle::setlength()
{

	if(length>width)
	{
		return length;
	}
	else
	return width;
}
double Rectangle::setwidth()
{

	if(length>width)
	{
		return width;
	}
	else
	return length;
}
double Rectangle::setperimeter()
{
	double l=setlength();
	double w=setwidth();
	double p=2*(l+w);
	return p;
}
double Rectangle::setarea()
{
	double l=setlength();
	double w=setwidth();
	double a=l*w;
	return a;
}
void Rectangle::square()
{
	double l=setlength();
	double w=setwidth();
	if(l==w)
	{
		cout<<"This is a square"<<endl;
	}
	else
	{
		cout<<"This is not a square"<<endl;
	}
}
