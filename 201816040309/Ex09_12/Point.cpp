#include <iostream>

using namespace std;
#include <math.h>
#include"Point.h"
#include"Rectangle.h"
Point::Point(double x_1,double y_1,double x_2,double y_2,double x_3,double y_3,double x_4,double y_4)
{
    bool point_state = judgepoint(x_1,y_1,x_2,y_2,x_3,y_3,x_4,y_4);
}
array<double,2> Point::setRectangle()
{
    bool Rectangle_state =  judgeRectangle();

    if(Rectangle_state)
    {
        double length = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        double width =  sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        double diagonal = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        double temp;

        if(length>diagonal)
        {
            temp = diagonal;
            diagonal = length;
            length = temp;
        }
        if(width>diagonal)
        {
            temp = diagonal;
            diagonal= width;
            width = diagonal;
        }
        if(width>length)
        {
            temp = length;
            length = width;
            width = temp;
        }
        if(length == width)
        {
            cout<<"this is a square"<<endl;
        }
        array<double,2> temp1;
        temp1[0] = length;
        temp1[1] = width;

        return temp1;
    }

}
bool Point::judgepoint(double x_1,double y_1,double x_2,double y_2,double x_3,double y_3,double x_4,double y_4)
{
	if((x_1 > 0 && x_1<20.0) && (y_1 > 0 && y_1 <20.0)&&(x_2 >0&&x_2<20.0)&&(y_2 >0&&y_2< 20.0)&&(x_3>0&&x_3<20.0)&&(y_3>0&&y_3<20)&&(x_4>0&&x_4<20)&&(y_4>0&&y_4<20))
    {
        x1 = x_1;
        x2 = x_2;
        x3 = x_3;
        x4 = x_4;
        y1= y_1;
        y2

        = y_2;
        y3 = y_3;
        y4 = y_4;
        return true;
    }
    else
        return false;
}
double Point::distant(double x_center,double y_center,double x,double y)
{
    return ((x_center - x)*(x_center-x)+(y_center-y)*(y_center-y));
}
bool Point::judgeRectangle()
{
    double x_center,y_center;
    x_center = (x1+x2+x3+x4)/4;
    y_center = (y1+y2+y3+y4)/4;
    int dis_a = distant(x_center,y_center,x1,y1);
    int dis_b = distant(x_center,y_center,x2,y2);
    int dis_c = distant(x_center,y_center,x3,y3);
    int dis_d = distant(x_center,y_center,x4,y4);
    if ((dis_a== dis_b)&& (dis_a == dis_c)&&(dis_a==dis_d))
    {
        cout<<"this is a rectangle"<<endl;
        return true;

    }
    else
        cout<<"this is not a rectangle"<<endl;
    return false;
}

