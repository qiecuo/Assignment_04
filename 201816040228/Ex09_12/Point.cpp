#include <iostream>
#include <string>
using namespace std;

#include "Point.h" // Point class definition
// constructor initializes  x and y
Point::Point(Point& p1 , Point& p2, Point& p3, Point& p4)
{
    setPoint( p1 , p2, p3, p4);
}
void Point::print()//打印
{
    cout<<"("<<x<<","<<y<<")"<<" ";
}


void Point::setPoint(Point& p1 , Point& p2, Point& p3,Point& p4)//坐标符合题意
{
   if(p1.x>0&&p1.x<=20&&p1.y>0&&p1.y<=20&&p2.x>0&&p2.x<=20&&p2.y>0&&p2.y<=20&&p3.x>0&&p3.x<=20&&p3.y>0&&p3.y<=20&&p4.x>0&&p4.x<=20&&p4.y>0&&p4.y<=20&&(((p1.y-p2.y)*(p1.y-p2.y)+(p1.x-p2.x)*(p1.x-p2.x))+((p1.y-p3.y)*(p1.y-p3.y)+(p1.x-p3.x)*(p1.x-p3.x))==((p3.y-p2.y)*(p3.y-p2.y)+(p3.x-p2.x)*(p3.x-p2.x))))
   {
        cout << "该坐标可以构成长方形"<< endl;
   }
   else
      throw invalid_argument( " 坐标不在题意范围之内 ");
}
