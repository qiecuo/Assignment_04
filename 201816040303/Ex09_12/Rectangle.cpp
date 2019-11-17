#include <iostream>
#include<stdlib.h>
#include "Rectangle.h"
#include"Point.h"
using namespace std;

Rectangle::Rectangle(Point &p1,Point &p2,Point &p3,Point &p4)
{

    if(p1.getX()>20||p1.getY()>20||p2.getX()>20||p2.getY()>20||p3.getX()>20||p3.getY()>20||p4.getX()>20||p4.getY()>20||
       p1.getX()<0||p1.getY()<0||p2.getX()<0||p2.getY()<0||p3.getX()<0||p3.getY()<0||p4.getX()<0||p4.getY()<0) {
        cout << "输入坐标超出范围" << endl;
        exit(0);
    } else {
        //int n;
        double c1,c2,c3,c4,d1,d2;
        c1 = (p1.getX()-p2.getX())*(p1.getX()-p2.getX())+(p1.getY()-p2.getY())*(p1.getY()-p2.getY());
        c2 = (p2.getX()-p3.getX())*(p2.getX()-p3.getX())+(p2.getY()-p3.getY())*(p2.getY()-p3.getY());
        c3 = (p3.getX()-p4.getX())*(p3.getX()-p4.getX())+(p3.getY()-p4.getY())*(p3.getY()-p4.getY());
        c4 = (p4.getX()-p1.getX())*(p4.getX()-p1.getX())+(p4.getY()-p1.getY())*(p4.getY()-p1.getY());
        d1 = (p1.getX()-p3.getX())*(p1.getX()-p3.getX())+(p1.getY()-p3.getY())*(p1.getY()-p3.getY());
        d2 = (p4.getX()-p2.getX())*(p4.getX()-p2.getX())+(p4.getY()-p2.getY())*(p4.getY()-p2.getY());
        if(c1 == c3 &&  c2 == c4 && d1 == d2) {
            if(c1 > c2) {
                length = c1;
                width = c2;
            } else {
                length = c2;
                width = c1;
            }
        } else {
            cout << "该图形非长方形" << endl;
            exit(0);
        }
    }
};

double Rectangle::getLength()
{
    return length;
};

double Rectangle::getWidth()
{
    return width;
};
double Rectangle::getPerimeter()
{
    perimeter = (length+width)*(length+width);
    return perimeter;
};

double Rectangle::getArea()
{
    area = length*width;
    return area;
};

void Rectangle::squre()
{
    if(length == width) {
        cout << "该图形为正方形" << endl;
    } else {
        cout << "该图形非正方形" << endl;
    }
};
