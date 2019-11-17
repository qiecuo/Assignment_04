#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	public:
		explicit Rectangle(double = 1.0,double = 1.0);
		void setRectangle(double,double);
		double getLength() const;
		double getWidth() const;
		void PrintPerimeter() const;
		void PrintArea() const;
	private:
		double length;
		double width;
};

#endif 
