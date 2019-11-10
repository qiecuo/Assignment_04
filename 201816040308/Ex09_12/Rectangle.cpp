#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

#include "Rectangle.h"
Rectangle::Rectangle(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{
    if(x1>=0.0&&x1<=20.0&&y1>=0.0&&y1<=20.0)
        cout<<1<<' ';
    else
        cout<<0<<' ';
    if(x2>=0.0&&x2<=20.0&&y2>=0.0&&y2<=20.0)
        cout<<1<<' ';
    else
        cout<<0<<' ';
    if(x3>=0.0&&x3<=20.0&&y3>=0.0&&y3<=20.0)
        cout<<1<<' ';
    else
        cout<<0<<' ';
    if(x4>=0.0&&x4<=20.0&&y4>=0.0&&y4<=20.0)
        cout<<1<<' ';
    else
        cout<<0<<' ';
    a.setx(x1);
    a.sety(y1);
    b.setx(x2);
    b.sety(y2);
    c.setx(x3);
    c.sety(y3);
    d.setx(x4);
    d.sety(y4);
}

bool Rectangle::judgeRectangle()
{
    double x=(a.getx()+b.getx()+c.getx()+d.getx())/4;
    double y=(a.gety()+b.gety()+c.gety()+d.gety())/4;
    if(fabs(((a.getx()-x)*(a.getx()-x)+(a.gety()-y)*(a.gety()-y))-((b.getx()-x)*(b.getx()-x)+(b.gety()-y)*(b.gety()-y)))<1e-6&&fabs(((c.getx()-x)*(c.getx()-x)+(c.gety()-y)*(c.gety()-y))-((a.getx()-x)*(a.getx()-x)+(a.gety()-y)*(a.gety()-y)))<1e-6&&fabs(((a.getx()-x)*(a.getx()-x)+(a.gety()-y)*(a.gety()-y))-((d.getx()-x)*(d.getx()-x)+(d.gety()-y)*(d.gety()-y)))<1e-6)
        return true;
    return false;
}

bool Rectangle::judgesquare()
{
    if((max(a.getx(),max(b.getx(),max(c.getx(),d.getx())))-min(a.getx(),min(b.getx(),min(c.getx(),d.getx()))))==(max(a.gety(),max(b.gety(),max(c.gety(),d.gety())))-min(a.gety(),min(b.gety(),min(c.gety(),d.gety())))))
        return true;
    return false;
}
double Rectangle::getlength()
{
    length=max((max(a.getx(),max(b.getx(),max(c.getx(),d.getx())))-min(a.getx(),min(b.getx(),min(c.getx(),d.getx())))),(max(a.gety(),max(b.gety(),max(c.gety(),d.gety())))-min(a.gety(),min(b.gety(),min(c.gety(),d.gety())))));
    return length;
}


double Rectangle::getwidth()
{
    width=min((max(a.getx(),max(b.getx(),max(c.getx(),d.getx())))-min(a.getx(),min(b.getx(),min(c.getx(),d.getx())))),(max(a.gety(),max(b.gety(),max(c.gety(),d.gety())))-min(a.gety(),min(b.gety(),min(c.gety(),d.gety())))));
    return width;
}

double Rectangle::getperimeter()
{
    perimeter=2*(getlength()+getwidth());
    return perimeter;
}

double Rectangle::getarea()
{
    area=getlength()*getwidth();
    return area;
}
