#include <iostream>
#include "Point.h"
#include <iomanip>

using namespace std;

Point::Point(double la1,double la2)
{
    setaxis(la1,la2);
}
void Point::setaxis(double l1,double l2)
{
    if(l1>=0&&l1<20)
    {
        xpointdata=l1;
    }
    else
    {
        throw invalid_argument(" the data is error");
    }
    if(l2>=0&&l2<20)
    {
        ypointdata=l2;
    }
    else
    {
        throw invalid_argument(" the data is error");
    }

}
double Point::gety()
{
    return ypointdata;
}
double Point::getx()
{
    return xpointdata;
}
void Point::output()
 {
     cout<<getx()<<setw(5)<<gety()<<endl;
 }
