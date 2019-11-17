#include <string> // program uses C++ standard string class
using namespace std;
#ifndef RECTANGLE_H
#define RECTANGLE_H


#include "Point.h"
// Rectangle class definition
class Rectangle
{
public:
   double Length(Point p1, Point p2, Point p3);//长
   double Width(Point p1, Point p2, Point p3);//宽
   double Perimeter(Point p1, Point p2, Point p3);//周长
   double Area(Point p1, Point p2, Point p3);//面积
   void Square(Point p1, Point p2, Point p3);//判断是否是长方形
}; // end class Invoice

#endif // RECTANGLE_H
