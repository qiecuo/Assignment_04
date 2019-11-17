#include <iostream>
#include <iomanip>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

Point::Point(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4)
{
  Rectangle a(x1,x2,x3,x4,y1,y2,y3,y4);
  if( a.getBian()==0)                              //Judge whether rectangle or out of bounds
        cout<<"坐标越界";
     if( a.getBian()==2)
            cout<<"不能构成长方形";
     if( a.getBian()==1)
     {
         a.calculation(x1,x2,y1,y4);              //calculated data
          a.square(x1,x2,y1,y4);                   //Judge whether a square
     }
}
