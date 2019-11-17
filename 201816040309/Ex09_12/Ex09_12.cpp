#include <iostream>

using namespace std;
#include"array"
#include "Rectangle.h"
#include "Point.h"
int main()
{
     Point  a(1,1,1,2,4,1,4,2);
     array<double,2> temp = a.setRectangle();
     Rectangle test(temp[0],temp[1]);
     cout<<test.getcircumference()<<" circumference"<<endl;
     cout<<test.getsquare()<<" square"<<endl;

//    cout<<"Rectangle circumference"<<test.getcircumference()<<endl;


}

