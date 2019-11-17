#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

class Rectangle
{
public:
    Rectangle( double = 1.0, double = 1.0 ); //Rectangle constructor
    void setLength( double ); // function to set the length
    double getLength( ); //function to retrieve the length
    void setWidth( double ); // function to set the width
    double getWidth( ); //function to retrieve the width
    double getPerimeter( ); //function to retrieve the perimeter
    double getArea( ); //function to retrieve the area
private:
    double length;
    double width;
}; // end class Rectangle

#endif
