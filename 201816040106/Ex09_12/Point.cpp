#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <ctime>
#include "Point.h"
using namespace std;
Point::Point(double X, double Y)
{
    setX(X);
    setY(Y);
}
void Point::setX(double X)
{
        x = X;
}
void Point::setY(double Y)
{
        y = Y;
}
double Point::getX()
{
    return x;
}
double Point::getY()
{
    return y;
}
