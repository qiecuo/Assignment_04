// Assignment_04: Point.h
// Definition of Point class.
#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
    friend std::istream & operator>>(std::istream &,Point &);
public:
    Point(double = 0,double = 0);

    //function to get
    double getX() const;
    double getY() const;

    //check validity
    bool checkPoint_TheFirstQuadrant() const;
private:
    // data member
    double x;
    double y;
};

#endif // POINT_H
