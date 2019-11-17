#include <iostream>
class Rectangle
{
	public:
		Rectangle(double=1,double=1);//声明构造函数；
		void setlength(double);
		double getlength();
		void setwidth(double);
		double getwidth();
		double perimeter(double,double);
		double area(double,double);
		void print();//声明打印函数； 
	private:
		double length;
		double width;
};
