#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include <string> // program uses C++ standard string class
using namespace std;

// Rectangle class definition
class Rectangle
{
public:
  // Rectangle(Point*_point):point(_point){}
   //~Rectangle(){};
   Rectangle( int l=1,int w=1);
   double getLength();
   double getWidth();

   double setPerimeter();
   double setArea();
private:
    double length;
    double width;
};//end class Rectangle


#endif // RECTANGLE_H_INCLUDED

