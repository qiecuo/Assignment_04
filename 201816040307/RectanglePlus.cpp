#include "Point.h"
#include<iostream>
#include<math.h>
#define Max(x,y,z)(((x>y)?x:y)>z?((x>y)?x:y):z)
#define Min(x,y,z)(((x<y)?x:y)<z?((x<y)?x:y):z)
using namespace std;

//judge (x, y) weather legal
int static Janny(double x, double y)
{
    if(x > 0 and y > 0 and x < 20 and y < 20)
        return 1;
    else
        return 0;
}

//calculate the distance between two points
double static Edward(double x, double y,double m ,double n)
{
    return (x - m) * (x - m) + (y - n)* (y - n);
}

//judge 90
int static Danny(double a1,double b1,double a2, double b2,
                             double a3,double b3)
{
    if(Edward(a1, b1, a2, b2) == Edward(a2, b2, a3, b3) + Edward(a3, b3, a1, b1) or
       Edward(a2, b2, a3, b3) == Edward(a1, b1, a3, b3) + Edward(a1, b1, a2, b2) or
       Edward(a3, b3, a1, b1) == Edward(a1, b1, a2, b2) + Edward(a2, b2, a3, b3)  )
        return 1;
    else
        return 0;
}



void RectanglePlus::calc_feature(double x1,double y1,double x2,double y2,
                                   double x3,double y3)
{
        double l1, l2, l3;//to save the value of three edges
        l1 = Edward(x1, y1, x2, y2);
        l2 = Edward(x1, y1, x3, y3);
        l3 = Edward(x2, y2, x3, y3);

        double mid, min_edge, max_edge;//define three edges

        //find the biggest and smallest edges
        max_edge = Max(l1, l2, l3);
        min_edge = Min(l1, l2, l3);
        mid = max_edge - min_edge ;
        cout<<"The length of this rectangle is: "<<sqrt(mid)<<endl;
        cout<<"The width of this rectangle is: "<<sqrt(min_edge)<<endl;
        cout<<"The area of this rectangle is: "<<sqrt(mid * min_edge)<<endl;
        cout<<"The perimeter of this rectangle is: "<<(sqrt(min_edge) + sqrt(mid))*2<<endl;


}

void RectanglePlus::weather_square(double x1,double y1,double x2,double y2,
                                   double x3,double y3)
{
        double l1, l2, l3;//to save the value of three edges
        l1 = Edward(x1, y1, x2, y2);
        l2 = Edward(x1, y1, x3, y3);
        l3 = Edward(x2, y2, x3, y3);
    //judge square
        int flag = 0;
        if(l1 == l2)
        {
            cout<<"It's a square."<<endl;
            flag = 1;
        }
        if(l1 == l3)
        {
            cout<<"It's a square."<<endl;
            flag = 1;
        }
        if(l2 == l3)
        {
            cout<<"It's a square."<<endl;
            flag = 1;
        }
        if(flag == 0)
            cout<<"It's a rectangle."<<endl;
}
