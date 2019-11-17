#include <iostream>
#include <math.h>
using namespace std;
//include the head File Rectangle.h
#include "Rectangle.h"
//Constructor

Rectangle::Rectangle(double a , double b)
{
    Length = a ;
    Weigth = b ;
}
//CalculatePerimeter
void Rectangle::CalculatePerimeter()
{
    Perimeter = Length+Length + Weigth+Weigth ;

}
//CalculateArea
void Rectangle::CalculateArea ()
{

    Area = Length * Weigth ;

}
//Display messages
void Rectangle::Display()
{
    cout <<"length & weigth are :"<<Length << "     "<<Weigth <<endl ;
    cout<< "Perimeter is :"<<Perimeter<<endl ;
    cout << "Area is :"<<Area<<endl ;
}

double  setLength(double a, double b , double c , double d )
{
    double Length ;
    double temp1 , temp2 , temp3 ;
    temp1 = a - b ;
    temp2 = a - c ;
    temp3 = a - d ;
    if(temp1 < 0)
        temp1 = fabs(temp1);
    if(temp2 < 0)
        temp2 = fabs(temp2);
    if(temp3 < 0)
        temp3 = fabs(temp3);
    if(temp1 != 0)
        Length = temp1 ;
    if(temp2 != 0)
        Length = temp2 ;
    if(temp3 != 0)
        Length = temp3 ;
    if(Length > 20.00){
        Length = 1 ;}
        return Length ;
}
double setWeigth(double a, double b , double c , double d )
{
    double Weigth ;
    double temp1 , temp2 , temp3 ;
    temp1 = a - b ;
    temp2 = a - c ;
    temp3 = a - d ;
    if(temp1 < 0)
        temp1 = fabs(temp1);
    if(temp2 < 0)
        temp2 = fabs(temp2);
    if(temp3 < 0)
        temp3 = fabs(temp3);
    if(temp1 != 0)
        Weigth = temp1 ;
    if(temp2 != 0)
        Weigth = temp2 ;
    if(temp3 != 0)
        Weigth = temp3 ;
    if(Weigth > 20.00){
        Weigth = 1 ;}
        return Weigth ;
}
//judge if weigth>length
int judge(double Weigth ,double Length)
{
    double temp ;
    if(Weigth>Length)
    {
        temp = Weigth ;
        Weigth = Length ;
        Length = temp ;
    }
        else if(Weigth == Length)
            return 1;

}
