#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    Point a,b,c,d;
    a.setPoint(0.0,10.0);
    b.setPoint(0.0,0.0);
    c.setPoint(20.0,10.0);
    d.setPoint(20.0,0.0);
    Rectangle rectangle(a,b,c,d);
    rectangle.setLength(a,c);
    rectangle.setArea();
    rectangle.setPerimeter();
    rectangle.setWidth(a,b);
    rectangle.IsSquare();//adjust

}
