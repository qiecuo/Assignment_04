#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
#include "Rectangle.h"

Rectangle::Rectangle(double length,double width)
{
	setRectangle(length,width);
}
void Rectangle::setRectangle(double l,double w)
{
	if(l>0.0&&l<20.0) 
		length = l;
	else
		throw invalid_argument("length must be 0-20");
	if(w>0.0&&w<20.0)
		width = w;
	else
		throw invalid_argument("wide must be 0-20");
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getWidth() const
{
	return width;
}
void Rectangle::PrintPerimeter() const
{
	
	cout<< ((length + width)*2);
	cout << "\n";
}
void Rectangle::PrintArea() const
{
	
	cout<< (getLength()*getWidth());
	cout << "\n";
}
