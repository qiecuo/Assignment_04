#include <iostream>

using namespace std;
//include the head File Date.h
#include "Rectangle.h"

int main()
{
    //Initialization data
    Rectangle rec(2.0 , 15.5);
    //Initialization Data and Test Error Value
    Rectangle rec1(100.0 , 200.5);
    rec.CalculateArea() ;
    rec.CalculatePerimeter();
    rec1.CalculateArea() ;
    rec1.CalculatePerimeter();
    //display all messages
    rec.Display();
    rec1.Display() ;
} // end main
