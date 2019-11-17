#include<iostream>
#include"Rectangle.h"//definition class Rectangle
using namespace std;
double Rectangle::Perimeter()//function perimeter
    {
        return 2*(width+length);
    }
    double Rectangle::Area()//the area function

    {
        return width*length;
    }
    double  Rectangle::getLength()//get length
    {
        return length;
    }
    double Rectangle::getWidth()//get width
    {
        return width;
    }
    void Rectangle::setLength(double L)//set length
    {
        if(L>=0.0&&L<=20.0)//judge the length
        {
            length=L;
        }
        else
        {
            cout<<"The length is useless"<<endl;//show useless
        }
    }
    void Rectangle::setWidth(double W)//set width
    {
        if(W>=0.0&&W<=20.0)//judge the width
         {
          width=W;
         }
          else
        {
         cout<<"the width is useless"<<endl;//show useless
        }
    }
