#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle rectangle;
    double length, width;//define
    cout << "please input two double values as length and width, \nand they must be between 0 and 20, \nor default them 1.\n\nLength:";
    cin >> length;
    cout << "Width:";
    cin >> width;
    //input length and width
    rectangle.setLength(length);
    rectangle.setWidth(width);
    double perimeter = rectangle.perimeter();
    double area = rectangle.area();
    //assignment two values to member data;
    cout << "The perimeter of rectangle is:";
    cout << perimeter << endl;
    cout << "The area of rectangle is:";
    cout << area << endl;
    //output perimeter and area;
    return 0;
}
