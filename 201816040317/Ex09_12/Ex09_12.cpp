#include <iostream>
#include <iostream>
#include "Rectangle.h"
#include "Point.h"
#include "math.h"

using namespace std;

int main()
{
    Point a,b,c,d;
    a.setPoint(0.3,5.4);
    b.setPoint(0.3,3.4);
    c.setPoint(1.3,5.4);
    d.setPoint(1.3,3.4);
    Rectangle z(a,b,c,d);
    z.Length();
    z.Width();
    z.Area();
    z.Perimeter();
    z.Square();
    cout <<"Length is :"<<z.getLength() <<endl;
    cout<<"Width is :"<<z.getWidth()<<endl;
    cout<<"Perimeter is :"<<z.getPerimeter()<<endl;
    cout<<"Area is :"<<z.getArea()<<endl;
    if(z.Square())
    {
        cout<<"This is a square";
    }
    else
    {
        cout<<"This is not a square;";
    }
}
