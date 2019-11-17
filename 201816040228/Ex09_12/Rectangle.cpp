#include <iostream>
#include <string>

#include "Rectangle.h" // Rectangle class definition
// constructor initializes  length and width
#include "Point.h"

using namespace std;

double Rectangle::Length(Point p1, Point p2, Point p3)//长
{
   double length=0;
   double a=0,c=0;
   a=sqrt((p1.y-p2.y)*(p1.y-p2.y)+(p1.x-p2.x)*(p1.x-p2.x));
   c=sqrt((p1.y-p3.y)*(p1.y-p3.y)+(p1.x-p3.x)*(p1.x-p3.x));
   if(a<c)
   {
       length=c;
   }
   else
   {
       length=a;
   }
   return length;
}

double Rectangle::Width(Point p1, Point p2, Point p3)//宽
{
   double width=0;
   double a=0,c=0;
   a=sqrt((p1.y-p2.y)*(p1.y-p2.y)+(p1.x-p2.x)*(p1.x-p2.x));
   c=sqrt((p1.y-p3.y)*(p1.y-p3.y)+(p1.x-p3.x)*(p1.x-p3.x));
   if(a>c)
   {
       width=c;
   }
   else
   {
       width=a;
   }
   return width;
}

double Rectangle::Perimeter(Point p1, Point p2, Point p3)//周长，
{
    double perimeter=0, a=0, c=0;
    a=sqrt((p1.y-p2.y)*(p1.y-p2.y)+(p1.x-p2.x)*(p1.x-p2.x));
    c=sqrt((p1.y-p3.y)*(p1.y-p3.y)+(p1.x-p3.x)*(p1.x-p3.x));
    perimeter=2*(a+c);
    return perimeter;
}

double Rectangle::Area(Point p1, Point p2, Point p3)//面积，长乘宽
{
    double area=0, a=0, c=0;
    a=sqrt((p1.y-p2.y)*(p1.y-p2.y)+(p1.x-p2.x)*(p1.x-p2.x));
    c=sqrt((p1.y-p3.y)*(p1.y-p3.y)+(p1.x-p3.x)*(p1.x-p3.x));
    area=a*c;
    return area;
}

void Rectangle::Square(Point p1, Point p2, Point p3)//判断是否是长方形，边长相等
{
    double a=0, c=0;
    a=sqrt((p1.y-p2.y)*(p1.y-p2.y)+(p1.x-p2.x)*(p1.x-p2.x));
    c=sqrt((p1.y-p3.y)*(p1.y-p3.y)+(p1.x-p3.x)*(p1.x-p3.x));

    if(a==c)
    {
        cout << " 该长方形是正方形 ";
    }
    else
    {
       cout << " 该长方形不是正方形 ";
    }

}
