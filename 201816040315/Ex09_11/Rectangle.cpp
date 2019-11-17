//Rectangle.cpp
//Rectangle class member-function definition
#include<iostream>
using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle(double width,double length)
{
    setLength( length );//initialize length
    setWidth( width );//initialize width
}//end Rectangle constructor

//function to set length
void Rectangle::setLength(double leng)
{
    if(leng>0.0&&leng<20.0)//Determine if the length is legal
        length = leng;//if the length is legal,initialize length
    else
    {
        cout<<"The length is illegal; width = 1"<<endl;
        length = 1.0;//otherwise,set length 1
    }

}//end function setLength

//function to retrieve length
double Rectangle::getLength()
{
    return length;
}//end function retrieve length

//function to set width
void Rectangle::setWidth( double wid)
{
    if(wid>0.0&&wid<20.0)//determine if the width is legal
        width = wid;//if the wid is legal,initialize width
    else
    {   cout<<"The width is illegal; width = 1"<<endl;
        width = 1.0;//otherwise,set it 1.0
    }
}//end function setWidth

//function to retrieve width
double Rectangle::getWidth()
{
    return width;
}//end function get width

//function to calculate perimeter
double Rectangle::gainPerimeter()
{
    return (length + width)*2;
}//end function calculate perimeter

//function to calculate area
double Rectangle::gainArea()
{
    return length * width;
}//end function calculate area





