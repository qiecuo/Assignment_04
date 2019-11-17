#include <iostream>

#include "Point.h"

using namespace std;

Point::Point(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{
	setPoint(x1,y1,x2,y2,x3,y3,x4,y4);
}
void Point::setPoint(double a1,double b1,double a2,double b2,double a3,double b3,double a4,double b4)
{
	x1=a1;
	y1=b1;
	x2=a2;
	y2=b2;
	x3=a3;
	y3=b3;
	x4=y4;
}
double Point::Length(double a,double b )
{
	return b-a;
}
double Point :: Width(double a,double b)
{
	return b-a;
}
void Point::Square()
{
	double x=x2-x1;
	double y=y2-y1;
	if(y==x)
	{
		cout<<"It is a square\n";
	}
	else
	{
		cout<<"It is not a square\n";
	}	
}
