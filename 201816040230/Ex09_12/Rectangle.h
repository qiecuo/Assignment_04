#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Coordinate.h"
class Rectangle
{
public:
Rectangle(Coordinate,Coordinate,Coordinate,Coordinate);
double length();
double width();
void area();
void perimeter();
void setCoor(Coordinate,Coordinate,Coordinate,Coordinate);
bool checksquare();
private:
    Coordinate Coordinate1;
    Coordinate Coordinate2;
    Coordinate Coordinate3;
    Coordinate Coordinate4;

};
#endif // RECTANGLE_H
