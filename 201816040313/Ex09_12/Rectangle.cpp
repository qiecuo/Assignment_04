 #include <iostream>
 #include "Point.h"
 #include "Rectangle.h"
 #include <cmath>
 #include <cstdlib>
 #include <iomanip>
 using namespace std;


 Rectangle::Rectangle(Point d1,Point d2,Point d3,Point d4)
 :   xpointdata1(d1),
     ypointdata1(d1),
     xpointdata2(d2),
     ypointdata2(d2),
     xpointdata3(d3),
     ypointdata3(d3),
     xpointdata4(d4),
     ypointdata4(d4)
     {

     }
Rectangle::Rectangle(double le,double wi)
{
    lengh=calculatelength(le,wi);
    width=calculatelwidth(le,wi);
}
 int Rectangle::judgeRectangle(double l1 , double l2, double w1, double w2)////judge whether it is a rectangle
 {

     l1=abs((xpointdata1.getx())-(xpointdata2.getx()));
     l2=abs((xpointdata3.getx())-(xpointdata4.getx()));
     w1=abs((ypointdata1.gety())-(ypointdata3.gety()));
     w2=abs((ypointdata2.gety())-(ypointdata4.gety()));
     if(l1==l2&&w1==w2)
     {
         cout << "this is a rectangle" <<endl;
         return 1;
     }
     else
     {
         cout << "this is not rectangle" <<endl;
         exit(0);
     }
 }
 int Rectangle::square(double le1 , double le2, double wi1, double wi2)////judge whether it is a square
 {

     le1=abs((xpointdata1.getx())-(xpointdata2.getx()));
     le2=abs((xpointdata3.getx())-(xpointdata4.getx()));
     wi1=abs((ypointdata1.gety())-(ypointdata3.gety()));
     wi2=abs((ypointdata2.gety())-(ypointdata4.gety()));
     if(le1==le2&&wi1==wi2&&le1==wi1)
     {
         cout << "this is a square" <<endl;
         return 1;
     }
     else
     {
         cout << "this is not square" <<endl;
         return 0;
     }
 }
// void Rectangle::output()const
 //{
     //cout<<getx()<<setw(5)<<gety()<<endl;
// }
 double Rectangle::calculatelength(double lengh,double width)//calculate lengh
 {

     lengh=abs((xpointdata1.getx())-(xpointdata2.getx()));
     width=abs((ypointdata1.gety())-(ypointdata3.gety()));
     if(lengh>=width)
     {
         return lengh;
     }
     else
     {
         return width;
     }
 }
double Rectangle::calculatelwidth(double lengh,double width)//calculate width
{
    lengh=abs((xpointdata1.getx())-(xpointdata2.getx()));
    width=abs((ypointdata1.gety())-(ypointdata3.gety()));
    if(width<=lengh)
    {
        return width;
    }
    else
    {
        return lengh;

    }
}
double Rectangle::calculateperimeter(double l, double w, double ll, double ww,double lll,double www)//calculate perimeter
{
    l=calculatelength(ll,lll);
    w=calculatelwidth(ww,www);
    return (l+w)*2;
}
double Rectangle::calculatearea(double le, double wi,double lll, double www,double ll,double ww)//calculate area
{
    le=calculatelength(lll,ll);
    wi=calculatelwidth(www,ww);
    return le*wi;
}
double Rectangle::getlengh()
{
    return lengh;
}
double Rectangle::getwidth()
{
    return width;
}


