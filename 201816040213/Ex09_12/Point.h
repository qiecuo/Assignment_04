#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point
{
public:
    Point( double=1, double=0 ); //Point constructor
    void setPoint( double, double ); // function to set the point
    double getX(); // function to retrieve the X coordinate
    double getY(); // function to retrieve the Y coordinate
private:
    double x;
    double y;
};


#endif // POINT_H_INCLUDED
