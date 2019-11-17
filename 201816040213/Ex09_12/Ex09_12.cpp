#include <iostream>
#include "Rectangle.h"  //include definition of class Rectangle from Rectangle.h
#include "Point.h"  //include definition of class Point from Point.h
using namespace std;

int main()
{
    Point a1(1, 2), a2(4, 2), a3(1, 1), a4(4, 1); //enter the coordinates of four points
    Rectangle rec1( a1, a2, a3, a4 ); //initialize rec1
    //output length and width
    cout <<"Rec1:\n"<<"  长："<< rec1.getLength() <<"\n  宽："<< rec1.getWidth()<< endl;
    //output perimeter and area
    cout <<"周长："<< rec1.getPerimeter() <<"\n面积："<< rec1.getArea()<< endl;
    rec1.judgeSquare(); //judge whether it is a square

    cout<<endl;
    Point b1(1, 2), b2(3, 4), b3(3, 0), b4(5, 2); //enter the coordinates of four points
    Rectangle rec2( b1, b2, b3, b4 ); //initialize rec2
    //output length and width
    cout <<"Rec2:\n"<<"  长："<< rec2.getLength() <<"\n  宽："<< rec2.getWidth()<< endl;
    //output perimeter and area
    cout <<"周长："<< rec2.getPerimeter() <<"\n面积："<< rec2.getArea()<< endl;
    rec2.judgeSquare();  //judge whether it is a square
    return 0;
}
