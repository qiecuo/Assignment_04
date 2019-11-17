#include "Point.h"
#include <iostream>

using namespace std;

Point::Point()
{

}
Point::Point(double x,double y)
{
    setx(x);//set abscissa
    sety(y);//set ordinate
}//end constructor
//function set abscissa
void Point::setx( double xx )
{
    if(xx>0.0&&xx<20.0)//judge whether the number is legal
        x=xx;
    else
    {
        cout<<"The abscissa is illegal."<<endl;
        x=0.0;
    }
}//end function set abscissa
//function set ordinate
void Point::sety( double yy )
{
    if(yy>0.0&&yy<20.0)//judge whether the number is legal
        y=yy;
    else
    {
        cout<<"The ordinate is illegal."<<endl;
        y=0.0;
    }
}//end function set ordinate
//function to retrieve abscissa
double Point::getx()
{
    return x;
}//end
double Point::gety()
{
    return y;
}//end

