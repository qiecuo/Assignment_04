#include"Point.h"
#include"Rectangle.h"
#include<iostream>
#include<iomanip>
#include<stdexcept>
#include<cmath>
using namespace std;
Rectangle::Rectangle(Point n1,Point n2,Point n3,Point n4)
{
    setRectangle(n1,n2,n3,n4);
}
void Rectangle::setRectangle(Point n1,Point n2,Point n3,Point n4)
{
    if(n1.getX()<=0||n1.getY()<=0||n2.getX()<=0||n2.getY()<=0||n3.getX()<=0||n3.getY()<=0||n4.getX()<=0||n4.getY()<=0)
        throw invalid_argument("Coordinates must be in the first quadrant");
    if(n1.getX()>=20||n1.getY()>=20||n2.getX()>=20||n2.getY()>=20||n3.getX()>=20||n3.getY()>=20||n4.getX()>=20||n4.getY()>=20)
        throw invalid_argument("Coordinates must be less than 20.0");
    double x1=n1.getX(),x2=n2.getX(),x3=n3.getX(),x4=n4.getX();
    double y1=n1.getY(),y2=n2.getY(),y3=n3.getY(),y4=n4.getY();
    double xc=(x1+x2+x3+x4)/4;
    double yc=(y1+y2+y3+y4)/4;
    double dis1=sqrt((x1-xc)*(x1-xc)+(y1-yc)*(y1-yc));
    double dis2=sqrt((x2-xc)*(x2-xc)+(y2-yc)*(y2-yc));
    double dis3=sqrt((x3-xc)*(x3-xc)+(y3-yc)*(y3-yc));
    double dis4=sqrt((x4-xc)*(x4-xc)+(y4-yc)*(y4-yc));
    if(dis1!=dis2||dis1!=dis3||dis1!=dis4||dis2!=dis3||dis2!=dis4||dis3!=dis4)
        throw invalid_argument("Coordinates cannot form rectangles");
    p1=n1,p2=n2,p3=n3,p4=n4;
    array<double,4> x={x1,x2,x3,x4};
    array<double,4> y={y1,y2,y3,y4};
    double minX=100,minY=100,maxX=0,maxY=0;
    for(size_t i=0;i<4;i++){
        if(x[i]<minX) minX=x[i];
        if(x[i]>maxX) maxX=x[i];
        if(y[i]<minY) minY=y[i];
        if(y[i]>maxY) maxY=y[i];
    }
    length=maxX-minX;
    width=maxY-minY;
    if(length<width) swap(length,width); 
}
double Rectangle::area()
{
    return length*width;
}
double Rectangle::perimeter()
{
    return length*2+width*2;
}
double Rectangle::getLength()
{
    return length;
}
double Rectangle::getWidth()
{
    return width;
}
bool Rectangle::square()
{
    return length==width;
}
