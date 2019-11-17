#include <iostream>
using namespace std;

#include "Rectangle.h"
Rectangle::Rectangle( double rectanglelength, double rectanglewidth )
{
    setRectangleLength( rectanglelength=1.0 );
    setRectangleWidth( rectanglewidth=1.0 );
}
void Rectangle::setRectangleLength( double rectanglelength )
{
    if(rectanglelength>=0.0&&rectanglelength<=20.0)
    rectangleLength = rectanglelength;
    else
        throw invalid_argument( "RectangleLenth must be 0.0~20.0");
}
double Rectangle::getRectangleLength()
{
    return rectangleLength;
}
void Rectangle::setRectangleWidth( double rectanglewidth )
{
    if(rectanglewidth>=0.0&&rectanglewidth<=20.0)
    rectangleWidth = rectanglewidth;
    else
        throw invalid_argument( "RectangleWidth must be 0.0~20.0");
}
double Rectangle::getRectangleWidth()
{
    return rectangleWidth;
}
double Rectangle::getRectanglePerimeter()
{
    rectanglePerimeter = 2*( RectangleLength+RectangleWidth );
    return rectanglePerimeter;
}
double Rectangle::getRectangleArea()
{
    rectangleArea = RectangleLength*RectangleWidth;
    return RectangleArea;
}

