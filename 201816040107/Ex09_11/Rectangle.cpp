#include <iostream>
#include "Rectangle.h"
using namespace std;
Rectangle::Rectangle(double a,double b)//构造函数的定义； 
{
	setlength(a);
	setwidth(b);
} 
void Rectangle::setlength(double a)
{
	if(a>0.0 && a<20.0)
	{
		length=a;
	}
	else
	cout<<"invalid data"<<endl;
}
double Rectangle::getlength()
{
	return length;
}
void Rectangle::setwidth(double b)
{
	if(b>0.0 && b<20.0)
	{
		width=b;
	}
	else
	cout<<"invalid data"<<endl;
}
double Rectangle::getwidth()
{
	return width;
}
double Rectangle::perimeter(double a,double b)
{
	double z=2*(a+b);
	return z;
}
double Rectangle::area(double a,double b)
{
	double q=a*b;
	return q;
	
}
void Rectangle::print()
{

	
	cout<<"perimeter is"<<" "<<perimeter(length,width)<<endl;
	cout<<"area is"<<" "<<area(length,width)<<endl;
}

