#include "Point.h"
#include<iostream>
#include<cmath>
using namespace std;
//default constructor of class Point
Point::Point(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{
    setPeremater(x1,y1,x2,y2,x3,y3,x4,y4);
}
//to set the data of the object
void Point::setPeremater(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{
    if((x1-x2)!=0 && (x2-x1)==(x4-x3) && (y2-y4)!=0&&
       (y2-y1)==(y4-y3)!=0 && x1>0 && x1<20 && x2>0 && x2<20 && y1>0 && y1<20 && y2>0 && y2<20
       && x3>0 && x3<20 && x4>0 && x4<20 && y3>0 && y3<20 && y4>0 && y4<20)//to judge the data whether it is invalid
    {
        this->x1=x1;
        this->x2=x2;
        this->x3=x3;
        this->x4=x4;
        this->y1=y1;
        this->y2=y2;
        this->y3=y3;
        this->y4=y4;
    }
    else
        cout<<"The data you entered is invalid"<<endl<<endl;
}
//to set the length of the point
double Point::pointLength()
{
    int num1,num2;
     if(x1!=x2)
        num1=fabs(x1-x2);
    else if(x1!=x3)
        num1=fabs(x1-x3);
    else
        num1=fabs(x1-x4);
    if(y1!=y2)
        num2=fabs(y1-y2);
    else if(y1!=y3)
        num2=fabs(y1-y3);
    else
        num2=fabs(y1-y4);
    return (num1>num2)?num1:num2;
}
//to set the width of the point
double Point::pointWidth()
{
     int num1,num2;
     if(x1!=x2)
        num1=fabs(x1-x2);
    else if(x1!=x3)
        num1=fabs(x1-x3);
    else
        num1=fabs(x1-x4);
    if(y1!=y2)
        num2=fabs(y1-y2);
    else if(y1!=y3)
        num2=fabs(y1-y3);
    else
        num2=fabs(y1-y4);
    return (num1<num2)?num1:num2; //return the min value of num1 and num2
}
//to display the point
void Point::pointDisplay()
{
    cout<<"x1: "<<x1<<" y1: "<<y1<<endl;
    cout<<"x2: "<<x1<<" y2: "<<y2<<endl;
    cout<<"x3: "<<x3<<" y3: "<<y3<<endl;
    cout<<"x4: "<<x4<<" y4: "<<y4<<endl;

}
