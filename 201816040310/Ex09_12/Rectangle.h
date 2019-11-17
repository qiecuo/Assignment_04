#include "Point.h"
#include <array>
using namespace std;
class Rectangle
{
public:
    Rectangle(array<Point, 4> arr); // use a point array to initialize a Rectangle
    double getLength() const;       // calculte and return rec's length
    double getWidth() const;        // calculte and return rec's width
    double getPerimeter() const;    // ~perimetar
    double getArea() const;         // ~area

    bool isRectangle() const; // judge this whether is a rectangle
    bool isSquare() const;    // judge this whether is a square

private:
    /*  a b
        c d
        a: top left
        b: top right
        c: bottom left
        d: bottom right
         */
    Point a, b, c, d;
    bool IsRectangle;  // flag store whether is a rectangle
    bool IsSquare;     // flag store whether is a square
    bool check(Point); // check whether point is ok
};
