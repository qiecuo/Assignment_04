#include <iostream>
#include <array>

#include "Rectangle.h"
#include "Point.h"
using namespace std;

int main()
{
    Point a(0,0),b(0,4),c(2,0),d(2,4);

    Rectangle tangle(a,b,c,d);


    cout<<"The length of the rectangle is "<<tangle.Length()<<endl;
    cout<<"The width of the rectangle is "<<tangle.Width()<<endl;
    cout<<"The perimeter of the rectangle is "<<tangle.Perimeter()<<endl;
    cout<<"The area of the rectangle is "<<tangle.Area()<<endl<<endl;

    tangle.square();
    return 0;
}
