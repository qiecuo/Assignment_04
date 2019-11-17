#include <math.h>
#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(double x11, double y11, double x22, double y22, double x33, double y33, double x44, double y44)
{
    setNumber(x11, y11, x22, y22, x33, y33, x44, y44);
}

void Point::setNumber(double x11, double y11, double x22, double y22, double x33, double y33, double x44, double y44)
{
    if(x11 > 0 && x11 < 20 && y11 > 0 && y11 < 20 && x22 > 0 && x22 < 20 && y22 > 0 && y22 < 20 &&
       x33 > 0 && x33 < 20 && y33 > 0 && y33 < 20 && x44 > 0 && x44 < 20 && y44 > 0 && y44 < 20 )
    {
        double x_c = (x11+x22+x33+x44)/4;
        double y_c = (y11+y22+y33+y44)/4;
        double d1 = fabs(x_c-x11)*fabs(x_c-x11) + fabs(y_c-y11)*fabs(y_c-y11);
        double d2 = fabs(x_c-x22)*fabs(x_c-x22) + fabs(y_c-y22)*fabs(y_c-y22);
        double d3 = fabs(x_c-x33)*fabs(x_c-x33) + fabs(y_c-y33)*fabs(y_c-y33);
        double d4 = fabs(x_c-x44)*fabs(x_c-x44) + fabs(y_c-y44)*fabs(y_c-y44);

        if( fabs(d1-d2) < 0.01 && fabs(d1-d3) < 0.01 && fabs(d1-d4) < 0.01 && fabs(d3-d2) < 0.01 &&
            fabs(d4-d2) < 0.01 && fabs(d3-d4) < 0.01 )
        {
            x1 = x11;
            x2 = x22;
            x3 = x33;
            x4 = x44;
            y1 = y11;
            y2 = y22;
            y3 = y33;
            y4 = y44;
        }
        else
            cout <<"The number is illegal !" << endl;
    }
    else
        cout << "The number is illegal !" << endl;
}

double Point::getX1()
{
    return x1;
}

double Point::getX2()
{
    return x2;
}

double Point::getX3()
{
    return x3;
}

double Point::getY1()
{
    return y1;
}

double Point::getY2()
{
    return y2;
}

double Point::getY3()
{
    return y3;
}

double Point::getX4()
{
    return x4;
}

double Point::getY4()
{
    return y4;
}
