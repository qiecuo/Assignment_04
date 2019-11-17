// Assignment_04: Ex09_11.cpp
// Create and manipulate Rectangle objects.

#include <iostream>
#include <stdexcept>
using namespace std;

#include "Rectangle.h" // include definition of class Rectangle from Rectangle.h

// function main begins program execution
int main()
{
    Rectangle rectangle1;// create Rectangle object
    Rectangle rectangle2(2,5);// create Rectangle object
    Rectangle rectangle3(43,12);// create Rectangle object

    // display
    cout << "The rectangle's length is " << rectangle1.getLength()
        << "\nThe rectangle's width is " << rectangle1.getWidth()
        << "\nThe rectangle's perimeter is " << rectangle1.Perimeter()
        << "\nThe rectangle's area is " << rectangle1.Area() << endl;

    // display
    cout << "\nThe rectangle's length is " << rectangle2.getLength()
        << "\nThe rectangle's width is " << rectangle2.getWidth()
        << "\nThe rectangle's perimeter is " << rectangle2.Perimeter()
        << "\nThe rectangle's area is " << rectangle2.Area() << endl;

    // display
    cout << "\nThe rectangle's length is " << rectangle3.getLength()
        << "\nThe rectangle's width is " << rectangle3.getWidth()
        << "\nThe rectangle's perimeter is " << rectangle3.Perimeter()
        << "\nThe rectangle's area is " << rectangle3.Area() << endl;
} // end main
