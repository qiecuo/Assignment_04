#include <iostream>

using namespace std;
//include the head File Rectangle.h
#include "Rectangle.h"
//Constructor
Rectangle::Rectangle(double length , double weigth)
{
    setLength(length);
    setWeigth(weigth);
}
//Set Length
void Rectangle::setLength(double length)
{
    if(length>=0 && length <= 20)
        Length = length;
    else
        Length = 1;
}
//Get Length
double Rectangle::getLength()
{
    return Length ;
}
//Set Weigth
void Rectangle::setWeigth(double weigth)
{
    if(weigth>=0 && weigth<=20)
        Weigth = weigth ;
    else
        Weigth = 1;
}
//Get Weigth

void Rectangle::CalculatePerimeter()
{
    Perimeter = Length+Length + Weigth+Weigth ;

}

void Rectangle::CalculateArea ()
{

    Area = Length * Weigth ;

}

void Rectangle::Display()
{
    cout <<"length & weigth are :"<<Length << "     "<<Weigth <<endl ;
    cout<< "Perimeter is :"<<Perimeter<<endl ;
    cout << "Area is :"<<Area<<endl ;
}
