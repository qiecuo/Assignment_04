#include <iostream>
using namespace std;

#include "Point.h"

Point Point( double x1,double x2,double x3,double x4,double y1,double y2,double y3,double y4)
{
    void setPointX1( pointX1=x1 );
    void setPointX2( pointX2=x2 );
    void setPointX3( pointX3=x3 );
    void setPointX4( pointX4=x4 );
    void setPointY1( pointY1=y1 );
    void setPointY2( pointY2=y2 );
    void setPointY3( pointY3=y3 );
    void setPointY4( pointY4=y4 );
}
void Point::setPointX1()
{
    if( x1>=0.0&&x1<=20.0)
        pointX1=x1;
    else
       throw invalid_argument( " the member must be in 0.0~20.0 " );
}
double Point::getPointX1()
{
    return pointX1;
}
void Point::setPointX2()
{
    if( x2>=0.0&&x2<=20.0)
        pointX2=x2;
    else
       throw invalid_argument( " the member must be in 0.0~20.0 " );
}
double Point::getPointX2()
{
    return pointX2;
}
void Point::setPointX3()
{
    if( x3>=0.0&&x3<=20.0)
        pointX3=x3;
    else
       throw invalid_argument( " the member must be in 0.0~20.0 " );
}
double Point::getPointX3()
{
    return pointX3;
}
void Point::setPointX4()
{
    if( x4>=0.0&&x4<=20.0)
        pointX1=x4;
    else
       throw invalid_argument( " the member must be in 0.0~20.0 " );
}
double Point::getPointX4()
{
    return pointX4;
}
void Point::setPointY1()
{
    if( y1>=0.0&&y1<=20.0)
        pointY1=y1;
    else
       throw invalid_argument( " the member must be in 0.0~20.0 " );
}
double Point::getPointY1()
{
    return pointY1;
}
void Point::setPointY2()
{
    if( y1>=0.0&&y1<=20.0)
        pointY2=y2;
    else
       throw invalid_argument( " the member must be in 0.0~20.0 " );
}
double Point::getPointY2()
{
    return pointY2;
}
void Point::setPointY3()
{
    if( y3>=0.0&&y3<=20.0)
        pointY1=y3;
    else
       throw invalid_argument( " the member must be in 0.0~20.0 " );
}
double Point::getPointY3()
{
    return pointY3;
}
void Point::setPointY4()
{
    if( y4>=0.0&&y4<=20.0)
        pointY4=y4;
    else
       throw invalid_argument( " the member must be in 0.0~20.0 " );
}
double Point::getPointY4()
{
    return pointY4;
}

void square( double , double , double , double );
{
    array < double , 7 > coordinate;
    coordinate[0] = pow(x1-x2,2) + pow(y1-y2,2);
    coordinate[1] = pow(x2-x3,2) + pow(y2-y3,2);
    coordinate[2] = pow(x3-x4,2) + pow(y3-y4,2);
    coordinate[3] = pow(x4-x1,2) + pow(y4-y1,2);
    coordinate[4] = pow(x1-x3,2) + pow(y1-y3,2);
    coordinate[5] = pow(x2-x4,2) + pow(y2-y4,2);
    if(coordinate[0]==coordinate[1]&&coordinate[4]==coordinate[5])
        cout << "yes" << endl;
}
