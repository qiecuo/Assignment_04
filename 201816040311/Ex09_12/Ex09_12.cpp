#include <iostream>
#include "Point.h"
#include <array>
#include "Rectangle.h"
#include <stdio.h>
using namespace std;

int main()
{
    /* a b
       c d */
    Point a(1.0,15.0);//create object a
    Point b(4.0,15.0);//create object b
    Point c(1.0,10.0);//create object c
    Point d(4.0,10.0);//create object d
    Rectangle al,dl;////create object al,bl
    //set al,bl's Length and width
    al.setLength(b.getX()-a.getX());
    al.setWidth(a.getY()-c.getY());
    dl.setLength(d.getX()-c.getX());
    dl.setWidth(b.getY()-d.getY());
    //length,width,perimeter,area
    if(al.square(dl))
    {
        cout <<"("<<al.getLength()<<","<<al.getWidth()<<")"<<endl;
        cout << "This Rectangle's length is:"<<al.getLength()<<endl;
        cout << "This Rectangle's width is:"<<al.getWidth()<<endl;
        cout << endl;
        cout << "This Rectangle's perimeter is:"<<al.perimeter()<<endl;
        cout << "This Rectangle's area is:"<<al.area()<<endl;
        cout << endl;
    }
    else
    {
        return 0;
    }


    return 0;
}

