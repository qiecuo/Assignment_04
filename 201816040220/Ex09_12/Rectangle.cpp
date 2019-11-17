
#include <iostream>
using namespace std;
#include "Point.h"
#include <cmath>
#include "Rectangle.h" 

Rectangle::Rectangle(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4)
{
    setBian(x1,x2,x3,x4,y1,y2,y3,y4);
}

void Rectangle::setBian(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4)                    //Judge side length
{
    double a,b,c1,c2,c3,c4;                   //中点到四个点坐标相等则为长方形
    a=(x1+x2+x3+x4)/4;
    b=(y1+y2+y3+y4)/4;
    c1=sqrt((y1-b)*(y1-b)+(x1-a)*(x1-a));
    c2=sqrt((y2-b)*(y2-b)+(x2-a)*(x2-a));
    c3=sqrt((y3-b)*(y3-b)+(x3-a)*(x3-a));
    c4=sqrt((y4-b)*(y4-b)+(x4-a)*(x4-a));

    cout<<b<<a<<c1<<c2<<c3<<c4;
    if(x1<0||x1>20.0||x2<0||x2>20.0||x3<0||x3>20.0||x4<0||x4>20.0||y1<0||y1>20.0||y2<0||y2>20.0||y3<0||y3>20.0||y4<0||y4>20.0)  //Judge whether out of bounds
        flag=0;
    else if(c1==c2&&c1==c3&&c1==c4)

        flag=1;

        //if((y1-y4==y2-y3)&&(x1-x2==x4-x3))                                                         //Judge whether rectangle

    else flag=2;
}

 float Rectangle::getBian()                                                   //get data
 {
     return flag;
 }

void Rectangle::calculation(float x1,float x2,float y1,float y4)                   //calculated data
 {
     length=y1-y4;
     width=x2-x1;
     perimeter=2*(length+width);
     area=length*width;

     cout<<"length:"<<length<<" "<<"width:"<<width<<" "<<"perimeter"<<perimeter<<" "        //output
        <<"area:"<<area<<endl;
 }

 void Rectangle::square(float x1,float x2,float y1,float y4)                             //Judge whether a square
 {
     if((y1-y4)==(x2-x1))
        cout<<"是正方形";
     else
        cout<<"不是正方形";
 }
