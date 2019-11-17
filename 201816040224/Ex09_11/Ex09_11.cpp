// Lab 1: RectangleTest.cpp
// Create and manipulate Rectangle objects.
#include <iostream>
using namespace std;

// include definition of class Account from Rectangle.h
#include "Rectangle.h"

int main()
{
   Rectangle rectang;
   double a;
   double b;
   cin>>a;
   cin>>b;
    rectang.setLength(a);
    rectang.setWidth(b);
   cout << "面积：" << rectang.getPerimeter() << endl;
   cout << "周长：" << rectang.getArea() << endl;

}
