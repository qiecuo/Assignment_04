#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Point.h"
#include"Rectangle.h"
//#include"Point.cpp"
using namespace std;
//constructor function
//calls number function to set variables
Rectangle::Rectangle(Point A,Point B,Point C,Point D)
{
    setlength(A,B);//calls number function to set length
    setwidth(A,C);//calls number function to set width
}//end function
//set length
void Rectangle::setlength(Point a,Point b)
{
    length=b.getx()-a.getx();
}//end function
//set width
void Rectangle::setwidth(Point a,Point c)
{
    width=a.gety()-c.gety();
}//end function
//get length
double Rectangle::getlength()
{
    return length;
}//end function
//get width
double Rectangle::getwidth()
{
    return width;
}//end function
//judge is rectangle or not
bool Rectangle::isRectangle(Point A,Point B,Point C,Point D)
{
    if((B.getx()-A.getx())==(D.getx()-C.getx())&&(A.gety()-C.gety())==(B.gety()-D.gety()))
        return true;
    else
        false;
}//end function
//judge is square or not
bool Rectangle::isSquare()
{
    if(length==width)
        return true ;
    else
        return false;
}//end function
double Rectangle::perimeter()
{

    return 2*(length+width);

}//end
double Rectangle::area()
{
    return length*width;
}//end
