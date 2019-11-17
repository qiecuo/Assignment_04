#include"Point.h"
#include<iostream>
using namespace std;
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

Point::Point(double a1,double b1,double a2, double b2,
                             double a3,double b3,double a4, double b4)
                             {
    setFunction(a1, b1, a2, b2, a3, b3, a4, b4);
                             }
void Point::setFunction(double a1,double b1,double a2, double b2,
                             double a3,double b3,double a4, double b4)
{
    //in the first quadrant
    if(Janny( a1, b1) and Janny(a2 ,b2) and Janny(a3, b3) and Janny(a4, b4))
        {
        //if it is a rectangle
        if(Danny(a1, b1, a2, b2, a3, b3 ) and
           Danny(a1, b1, a2, b2, a4, b4) and
           Danny(a2, b2, a3, b3, a4, b4))
           {
               cout<<"Successful!"<<endl;
               x1 = a1;
               x2 = a2;
               x3 = a3;
               x4 = a4;
               y1 = b1;
               y2 = b2;
               y3 = b3;
               y4 = b4;
           }
        else
            cout<<"Default!"<<endl;
        }
    else
        cout<<"Default!"<<endl;

}
