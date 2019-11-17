//define rectangle member function
#include <iostream>
#include "Rectangle.h"
#include "Point.h"
using namespace std;

Rectangle::Rectangle(Point q,Point w,Point e ,Point r)
{
    setRec(q,w,e,r);//initialize coordinate
}//end
void Rectangle::setRec(Point q,Point w,Point e,Point r)
{
    if(q.getx()==e.getx()&&q.gety()==w.gety()&&w.getx()==r.getx()&&e.gety()==r.gety())//judge whether the data suits a rectangle
    {
        One=q,Two=w,Three=e,Four=r;
    }
   /* else
    {
        cout<<"The data is illegal."<<end;
    }*/
}//end
//function to retrieve perimeter
double Rectangle::getPerimeter()
{
    return ((Two.getx()-One.getx())+(One.gety()-Three.gety()))*2;
}//end
//function to retrieve area
double Rectangle::getArea()
{
    return (Two.getx()-One.getx())*(One.gety()-Three.gety());
}//end
//function to retrieve length
double Rectangle::getLength()
{
    return (Two.getx()-One.getx())>=(One.gety()-Three.gety())?(Two.getx()-One.getx()):(One.gety()-Three.gety());
}//end
//function to retrieve width
double Rectangle::getWidth()
{
    return (Two.getx()-One.getx())<=(One.gety()-Three.gety())?(Two.getx()-One.getx()):(One.gety()-Three.gety());
}//end
//judge whether the rectangle is square
void Rectangle::square()
{
    if((Two.getx()-One.getx())==(One.gety()-Three.gety()))
        cout<<"The rectangle is square."<<endl;
    else
        cout<<"It just a rectangle."<<endl;
}
