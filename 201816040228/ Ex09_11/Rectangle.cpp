#include <iostream>
#include <string>
using namespace std;

#include "Rectangle.h" // Rectangle class definition
// constructor initializes  length and width
Rectangle::Rectangle(float length, float width)
{
   setLength( length );// initializes length
   setWidth( width );// initializes width
}



void Rectangle::setLength( float length )// function to set the length
{
    if(length>0.0&&length<20.0)
    {
         Length=length;
    }
    else
        throw invalid_argument( "边长不在有效范围之内" );

}
float Rectangle::getLength()// function to get the length
{
   return Length; // end function
}


void Rectangle::setWidth( float width )// function to set the width
{
    if(width>0.0&&width<20.0)
    {
         Width=width;
    }
    else

        throw invalid_argument( "边长不在有效范围之内" )
}
float Rectangle::getWidth()// function to get the width
{
    return Width; // end function
}



float Rectangle::Perimeter()// 周长
{
    return 2*(Length+Width);
}



float Rectangle::Area()// 面积
{
   return Width*Length;
}






