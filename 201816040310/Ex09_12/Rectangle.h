#include "Point.h"
#include <array>
using namespace std;
class Rectangle
{
public:
    Rectangle(array<Point, 4> arr);
    double getLength() const;
    double getWidth() const;
    double getPerimeter() const;
    double getArea() const;

    bool isRectangle() const;
    bool isSquare() const;

private:
    /*  a b
        c d */
    Point a, b, c, d;
    bool IsRectangle;
    bool IsSquare;
    bool check(Point);
};
