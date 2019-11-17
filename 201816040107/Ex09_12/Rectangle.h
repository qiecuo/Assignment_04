#include <iostream>
#include "Point.h"
class Rectangle
{
	public:
		Rectangle(Point,Point,Point,Point);//声明构造函数；
		void set(Point,Point,Point,Point);
		void square();//声明判断函数；
		double setlength();
		double setwidth();
		double setperimeter();//声明周长函数；
		double setarea(); //声明面积函数；
    private:
        double length;
        double width;

};
