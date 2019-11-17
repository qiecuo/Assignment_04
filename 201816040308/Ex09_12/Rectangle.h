#include "Point.h"
class Rectangle
{
public:
   Rectangle(double ,double ,double ,double ,double ,double ,double ,double );
   double getperimeter();
   double getarea();
   double getlength();
   double getwidth();
   bool judgeRectangle();
   bool judgesquare();
private:
   Point a;
   Point b;
   Point c;
   Point d;
   double length;
   double width;
   double perimeter;
   double area;
};


