#include<iostream>
#include<cmath>
using namespace std;
class Rectangle//defination of Rectangle
{
    double left1,left2;
    double right1,right2;
public:
    Rectangle(double l=0,double t=0,double r=0,double b=0);
    ~Rectangle()//destroy the class of Rectangle
    {
    }
    void setRec(double l,double t,double r,double b);//function to setRec
    void Assign(double l,double t,double r,double b);//function to Assign
    double getright1();//function to get right1
    double getright2();//function to get right2
    double getleft1();//function to get left1
    double getleft2();//function to get left2
    double perimeter();//calculator the perimeter
    double area();//calculator the area
    void show();
private://data members
    double left1,left2;
    double right1,right2;
};
