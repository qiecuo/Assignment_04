#include <iostream>

using namespace std;
#include "Rectangle.h"

int main()
{
    cout<<"please input rectangle's width and length please ensure them More than 0 less than 20"<<endl;
    cout<<"first you should input length and then input width"<<endl;
    double l,w;
    cin>>l;
    cin>>w;
    Rectangle a(l,w);
    cout<<"this rectangle's circumference is "<<a.getcircumference()<<endl;
    cout<<"this rectangle's square is "<<a.getsquare();
    return 0;
}
