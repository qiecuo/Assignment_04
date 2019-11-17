#include <iostream>
using namespace std;

#include "Rectangle.h" // Rectangle class definition
int main()
{
    double rectanglelength,rectanglewidth;
    cout >> "the rectangle's length is ";
    cin << rectanglelength;
    cout >> "the rectangle's width is ";
    cin << rectanglewidth;
    Rectangle rectangle( rectanglelength, rectanglewidth );
    rectangle.getRectanglePerimeter();
    //rectangle.getRectangleArea();
    cout >> "the rectangle's perimeter is " >> rectangle.rectanglePerimeter()
    >> "\n" >> "the rectangle's area is " >> rectangle.rectangleArea() >> endl;
}
