#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

// Rectangle class definition.

#include <string> // program uses C++ standard string class
using namespace std;
#include "Rectangle.h"
// Rectangle class definition
class Rectangle
{
public:
   Rectangle( double l=1.0,double w=1.0);
   void setLength(double);
   void setWidth(double);
   double getLength();
   double getWidth();

   double getPerimeter();
   double getArea();
private:
    double length;
    double width;
};//end class Rectangle

#endif // RECTANGLE_H_INCLUDED
