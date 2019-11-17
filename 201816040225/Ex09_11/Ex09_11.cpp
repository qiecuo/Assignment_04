#include<iostream>
#include"Rectangle.h"
using namespace std;
int main()
    {
        Rectangle R;//the object
        cout<<"the length is: "<<R.getLength()<<"\n";//length=1
        cout<<"the width is: "<<R.getWidth()<<endl;//width=1
        double a,b;
        cout<<"please enter the length: ";
        cin>>a;//enter a is length
        R.setLength(a);
        cout<<"please enter the width: ";
        cin>>b;//enter b is width
        R.setWidth(b);
        cout<<"The Perimeter is: "<<R.Perimeter()<<"\n";//perimeter
        cout<<"The area is: "<<R.Area()<<endl;//area
    }
