#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{

    Rectangle a(10, 12);
    cout << a.getLength() << endl;
    cout << a.getWidth() << endl;
    cout << a.getPerimeter() << endl;
    cout << a.getArea() << endl;

    a.setLength(21);
    cout << a.getLength() << endl;
    cout << a.getWidth() << endl;
    cout << a.getPerimeter() << endl;
    cout << a.getArea() << endl;
}