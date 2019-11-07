#include "Rectangle.h"
#include <array>
#include <iostream>
using namespace std;
Rectangle::Rectangle(array<Point, 4> arr)
{
    for (Point p : arr)
        if (!check(p))
        {
            cout << "error ,maybe point(s) out of range[0,20]" << endl;
            IsRectangle = false;
            IsSquare = false;
            return;
        }
    a = arr[0], b = arr[1], c = arr[2], d = arr[3];
    IsRectangle = isRectangle();
    IsSquare = isSquare();
}

bool Rectangle::check(Point p)
{
    double x = p.getX();
    double y = p.getY();
    if ((x < 0 || x > 20) || (y < 0 || y > 20))
        return false;

    return true;
}

double Rectangle::getLength() const
{
    if (!IsRectangle)
        return 0;
    return max(b.getX() - a.getX(), a.getY() - c.getY());
}

double Rectangle::getWidth() const
{
    if (!IsRectangle)
        return 0;
    return min(b.getX() - a.getX(), a.getY() - c.getY());
}

double Rectangle::getPerimeter() const
{
    if (!IsRectangle)
        return 0;
    return (getWidth() + getLength()) * 2;
}
double Rectangle::getArea() const
{
    if (!IsRectangle)
        return 0;
    return getWidth() * getLength();
}

bool Rectangle::isRectangle() const
{
    if ((a.getX() == c.getX()) && (a.getY() == b.getY()) && (d.getX() == b.getX()) && (d.getY() == c.getY()))
        return true;
    else
        return false;
}

bool Rectangle::isSquare() const
{
    if (isRectangle() && getWidth() == getLength())
        return true;
    return false;
}
