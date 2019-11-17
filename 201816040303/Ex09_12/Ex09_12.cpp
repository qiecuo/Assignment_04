#include <iostream>
#include "Rectangle.h"
#include "Point.h"
using namespace std;
//#include"Point.h"

int main()
{
    Point p1(0,0);
    Point p2(0,5);
    Point p3(5,5);
    Point p4(5,0);
    Rectangle r(p1,p2,p3,p4);
    cout << "Length:\t" << r.getLength() << "\nWidth:\t" <<r.getWidth() << "\nArea:\t" <<r.getArea() <<"\nPerimeter:\t" << r.getPerimeter() <<endl;
    r.squre();
    return 0;
}
