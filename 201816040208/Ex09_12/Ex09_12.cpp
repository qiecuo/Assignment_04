#include <iostream>
#include "Rectangle.h"
#include "Point.h"
using namespace std;

int main()
{
    Point a(1.0, 1.0, 1.0, 2.0, 2.0, 2.0, 2.0, 1.0);
    Rectangle b;

    double length = b.getLength(a);
    double width = b.getLength(a);
    double area1 = b.area(a);
    double perimeter = b.perimeter(a);

    cout << "The length is " << length << endl;
    cout << "The width is " << width << endl;
    cout << "The area is " << area1 << endl;
    cout << "The perimeter is " << perimeter << endl;
    if(b.square(a))
        cout << "It is a square" << endl;
    else
        cout << "It is not a square" << endl;



}
