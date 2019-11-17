#include <iostream>
#include <stdexcept>
#include <array>
#include <math.h>
using namespace std;
#include "Rectangle.h"
#include "Point.h"
//constructor function
Rectangle::Rectangle( double x1, double y1,double x2,double y2,double x3,double y3,
              double x4,double y4)
{
    point[1].setPoint( x1,y1 );
    point[2].setPoint( x2,y2 );
    point[3].setPoint( x3,y3 );
    point[4].setPoint( x4,y4 );
    cout<<"constructor called for:"<<endl;
    printPoint();//print the point
    Judge();//judge rectangle
}//end function
//function to judge rectangle
void Rectangle::Judge()
{
    array <double,5> xl = { 0,0,0,0,0 };
    array <double,5> yl = { 0,0,0,0,0 };
    array <int,4> pd = { 0,0,0,0 };
    xl[1]=point[1].getX()-point[2].getX();
    yl[1]=point[1].getY()-point[2].getY();
    xl[2]=point[2].getX()-point[3].getX();
    yl[2]=point[2].getY()-point[3].getY();
    xl[3]=point[3].getX()-point[4].getX();
    yl[3]=point[3].getY()-point[4].getY();
    xl[4]=point[1].getX()-point[4].getX();
    yl[4]=point[1].getY()-point[4].getY();
    /*xl[i] is x of vector quantity i , yl[i] is y of vector quantity i*/
    if(xl[1]*xl[2]+xl[1]*xl[2]==0)
        pd[0]=1;
    if(xl[2]*xl[3]+xl[2]*xl[3]==0)
        pd[1]=1;
    if(xl[3]*xl[4]+xl[3]*xl[4]==0)
        pd[2]=1;
    if(xl[1]*xl[4]+xl[1]*xl[4]==0)
        pd[3]=1;
    //to judge the four angles is right angle
    int j=0;
    for( int i=0;i<4;++i )
    {
        if(pd[i]==1)
            ++j;
        //record the number of right angles
    }
    if(j>=3)//if the number of right angles beyond 3
    {
        cout<<"this is a rectangle"<<endl;
    }
    else//throw error
    {
        throw invalid_argument("this is not a rectangle");
    }

}//end function
//function to judge square
void Rectangle::Square()
{
    if(this->Length()==this->Width())//if length = width ,it square
        cout<<"this is a square"<<endl;
    else
        cout<<"this is not a square"<<endl;
}//end function
void Rectangle::printPoint()//function to print point
{
    cout <<"( "<<point[1].getX()<<","<<point[1].getY()<<" )    "<<"( "<<point[2].getX()<<","<<point[2].getY()<<" )"
        <<"\n( "<<point[4].getX()<<","<<point[4].getY()<<" )    "<<"( "<<point[3].getX()<<","<<point[3].getY()<<" )"<<endl;
}//end function
//function to calculate width
double Rectangle::Width()
{
    double a,b;
    a = (point[1].getX()-point[2].getX())*(point[1].getX()-point[2].getX())+(point[1].getY()-point[2].getY())*(point[1].getY()-point[2].getY());
    b = (point[3].getX()-point[2].getX())*(point[3].getX()-point[2].getX())+(point[3].getY()-point[2].getY())*(point[3].getY()-point[2].getY());
    if( a>b )
        return sqrt(b);
    else
        return sqrt(a);
}//end function
//function to calculate length
double Rectangle::Length()
{
    double a,b;
    a = (point[1].getX()-point[2].getX())*(point[1].getX()-point[2].getX())+(point[1].getY()-point[2].getY())*(point[1].getY()-point[2].getY());
    b = (point[3].getX()-point[2].getX())*(point[3].getX()-point[2].getX())+(point[3].getY()-point[2].getY())*(point[3].getY()-point[2].getY());
    if( a>b )
        return sqrt(a);
    else
        return sqrt(b);
}//end function
//function to calculate perimeter
double Rectangle::perimeter()
{
    return 2*(this->Length()+this->Width());
}//end function
//function to calculate area
double Rectangle::area()
{
    return this->Length()*this->Width();
}//end function
