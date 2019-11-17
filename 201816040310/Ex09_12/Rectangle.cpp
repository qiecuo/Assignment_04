#include "Rectangle.h"
#include <array>
#include <iostream>
using namespace std;
Rectangle::Rectangle(array<Point, 4> arr)
{
    for (Point p : arr) // Traversal each point and check there are ok
        if (!check(p))
        {
            cout << "error ,maybe point(s) out of range[0,20]" << endl; // show a error msg
            IsRectangle = false;                                        // change two flags
            IsSquare = false;
            return;
        }
    a = arr[0], b = arr[1], c = arr[2], d = arr[3]; // store points
    IsRectangle = isRectangle();                    // jugde
    IsSquare = isSquare();                          //jugde
}

bool Rectangle::check(Point p)
{
    double x = p.getX();
    double y = p.getY();
    if ((x < 0 || x > 20) || (y < 0 || y > 20)) //check vaildity
        return false;
    return true;
}

double Rectangle::getLength() const // if it's not a rectangle ,this function will return -1
{
    if (!IsRectangle)
        return -1;
    return max(b.getX() - a.getX(), a.getY() - c.getY()); // calculate and return this rec's length
}

double Rectangle::getWidth() const // if it's not a rectangle ,this function will return -1
{
    if (!IsRectangle)
        return -1;
    return min(b.getX() - a.getX(), a.getY() - c.getY()); // calculate and return this rec's width
}

double Rectangle::getPerimeter() const // if it's not a rectangle ,this function will return -1
{
    if (!IsRectangle)
        return -1;
    return (getWidth() + getLength()) * 2;
}
double Rectangle::getArea() const // if it's not a rectangle ,this function will return -1
{
    if (!IsRectangle)
        return -1;
    return getWidth() * getLength();
}

bool Rectangle::isRectangle() const
{
    // calculate and judge
    if ((a.getX() == c.getX()) && (a.getY() == b.getY()) && (d.getX() == b.getX()) && (d.getY() == c.getY()))
        return true;
    else
        return false;
}

bool Rectangle::isSquare() const
{
    // calculate and judge
    if (isRectangle() && getWidth() == getLength())
        return true;
    return false;
}
