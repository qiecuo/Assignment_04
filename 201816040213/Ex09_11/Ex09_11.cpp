#include <iostream>
#include "Rectangle.h" //include definition of class Rectangle from Rectangle.h
using namespace std;

int main()
{
    Rectangle rec1(5.1,3.2);  //initialize rec1
    cout <<"  长："<< rec1.getLength()<< endl; //output length
    cout <<"  宽："<< rec1.getWidth()<< endl; //output width
    cout <<"周长："<< rec1.getPerimeter()<< endl; //output perimeter
    cout <<"面积："<< rec1.getArea()<< endl; //output area
    return 0;
}
