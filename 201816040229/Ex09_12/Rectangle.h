#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED



#endif // RECTANGLE_H_INCLUDED
#include<iostream>
using namespace std;

class Rectangle
{
public:
    Rectangle(int, int);
    void setWidth(int);
    void setLength(int);
    int getWidth();
    int getLength();
    Perimeter();
    Area();
private:
    int width;
    int length;

};
