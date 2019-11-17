#include <string> // program uses C++ standard string class

#ifndef POINT_H
#define POINT_H

#include <math.h>
// Point class definition
class Point
{
public:
    float x;
    float y;
   Point(Point&  , Point& , Point& , Point& );// constructor initializes number p1，p2,p3,p4
   Point(double a, double b)// constructor initializes number x，y
   {
       x=a;
       y=b;
   }
   void setPoint(Point&  , Point& , Point&, Point& );
   void print();
}; // end class Invoice

#endif
