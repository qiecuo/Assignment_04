#include <iostream>
#include "Point.h"
#include "Rectangle.h" 
using namespace std;

int main()
{
    float x1,y1,x2,y2,x3,y3,x4,y4;

    cout<<"请依次顺时针输入四个坐标";               //input
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    cin>>x4>>y4;

     Point point(x1,x2,x3,x4,y1,y2,y3,y4);          //Create object



    return 0;
}
