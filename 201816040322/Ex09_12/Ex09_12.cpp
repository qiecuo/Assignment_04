// Assignment_04: Ex09_12.cpp
// Create and manipulate Rectangle objects.
#include <iostream>
#include <stdexcept>
using namespace std;

// include definition of class Rectangle from Rectangle.h
#include "Rectangle.h"

// function main begins program execution
int main()
{
    Point p1(1,1),p2(1,3),p3(3,3),p4(3,1),p5,p6,p7,p8;
    try
    {
        Rectangle rectangle1(p2,p3,p1,p4);// through object initializes

        cout << "The rectangle's length is " << rectangle1.getLength()
        << "\nThe rectangle's width is " << rectangle1.getWidth()
        << "\nThe rectangle's perimeter is " << rectangle1.getPerimeter()
        << "\nThe rectangle's area is " << rectangle1.getArea() << endl;
        if(rectangle1.isSquare())
            cout << "The rectangle is square!!!" << endl;
        else
            cout << "The rectangle isn't square!!!" << endl;
    }
    catch(invalid_argument &ex)
    {
        cout << ex.what() << endl;
    }

    // display
    cout << "\n\nPlease enter the coordinates of upper left, upper right,"
    << " lower left, lower right corner. Ex:(1,3)(3,3)(1,1)(3,1)" << endl;
    cin >> p5 >> p6 >> p7 >> p8;

    try
    {
        Rectangle rectangle2(p5,p6,p7,p8);

        cout << "\nThe rectangle's length is " << rectangle2.getLength()
        << "\nThe rectangle's width is " << rectangle2.getWidth()
        << "\nThe rectangle's perimeter is " << rectangle2.getPerimeter()
        << "\nThe rectangle's area is " << rectangle2.getArea() << endl;
        if(rectangle2.isSquare())
            cout << "The rectangle is square!!!" << endl;
        else
            cout << "The rectangle isn't square!!!" << endl;
    }
    catch(invalid_argument &ex)
    {
        cout << ex.what() << endl;
    }

} // end main
