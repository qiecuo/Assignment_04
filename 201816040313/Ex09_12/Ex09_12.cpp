#include <iostream>
#include "Point.h"
#include "Rectangle.h"
#include <iomanip>
using namespace std;

int main()
{
    Point point1(2,2);//declare four objects of the Point class, each with four coordinates
    Point point2(5,2);
    Point point3(2,0);
    Point point4(5,0);
    Rectangle data1(point1,point2,point3,point4);//declare object of the Rectangle class,with the four Point class s' objects
    double m,n,p,q,a,b;
    cout<<"judge is or is not rectangle" <<endl;
    data1.judgeRectangle(m,n,p,q);//judge whether it is a rectangle
    cout<<"judge is or is not square" <<endl;
    data1.square(m,n,p,q);//judge whether it is a square
    point1.output();point2.output();point3.output();point4.output();
    cout<<"the rectangle's length is:"<<setw(5)<<data1.calculatelength(m,n)<<endl;//calculate lengh
    data1.getlengh();
    cout<<"the rectangle's width is:"<<setw(5)<<data1.calculatelwidth(m,n)<<endl;//calculate width
    data1.getwidth();
    cout<<"the rectangle's perimeter is:"<<setw(5)<<data1.calculateperimeter(m,n,p,q,a,b)<<endl;//calculate perimeter
    cout<<"the rectangle's area is:"<<setw(5)<<data1.calculatearea(m,n,p,q,a,b)<<endl;//calculate area
    return 0;
}
