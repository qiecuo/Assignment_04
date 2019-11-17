#include <iostream>

using namespace std;
#include "Rectangle.h"

int main()
{
    double len,wid;
    Rectangle rectangle;
    cin >> len;//The length of the input
    cin >> wid;//Enter the width
    rectangle.setlength(len);
    rectangle.setwidth(wid);
    cout << rectangle.perimeter();//Output the perimeter
    cout << rectangle.area();//The output area
    return 0;
}
