#include "Rectangle.h"
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<Point, 4> arr;
    int x, y;
    for (int i = 0; i < 4; i++)
    {
        cin >> x >> y;
        arr[i] = Point(x, y);
    }
    Rectangle rec(arr);
    cout << "IsRec: " << (rec.isRectangle() ? "true" : "false") << endl;
    cout << "IsSqa: " << (rec.isSquare() ? "true" : "false") << endl;
    cout << "Area: " << rec.getArea() << endl;
    cout << "Perm: " << rec.getPerimeter() << endl;
    cout << "Length: " << rec.getLength() << endl;
    cout << "Width: " << rec.getWidth() << endl;
}
