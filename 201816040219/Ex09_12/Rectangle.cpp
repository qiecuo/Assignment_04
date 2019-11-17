#include<iostream>
#include"Rectangle.h"

Rectangle::Rectangle(int length,int width)//initializes  data
{
    setlength(length);
    setwidth(width);
}
/* Define a  function for  Calculate the perimeter */
int Rectangle::perimeter()
{
    int perimeter;
    perimeter = 2*(lengthdata+widthdata);
    return perimeter;
}
/* Define a  function for  Calculate the area */
int Rectangle::area()
{
    int area;
    area = lengthdata*widthdata;
    return area;
}
/*Define a set function and get function for the length data member.*/
void Rectangle::setlength(int length)
{
    lengthdata = length;
}
int Rectangle::getlength()
{
    return lengthdata;
}
/*Define a set function and get function for the width data member.*/
void Rectangle::setwidth(int width)
{
    widthdata = width;
}
int Rectangle::getwidth()
{
    return widthdata;
}




