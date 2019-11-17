#include <iostream>
#include <stdexcept>
#include "Rectangle.h"
#include"coordinate.h"
using namespace std;

int main()
{
    Coordinate a(0.0,0.0);
    Coordinate b(0.0,1.0);
    Coordinate c(1.0,1.0);
    Coordinate d(1.0,0.0);
    double x,y;
    cin>>x>>y;
    a.setx(x);a.sety(y);
    cin>>x>>y;
    b.setx(x);b.sety(y);
    cin>>x>>y;
    c.setx(x);c.sety(y);
    cin>>x>>y;
    d.setx(x);d.sety(y);
    Rectangle r(a,b,c,d);
    cout<<r.length()<<endl;
    cout<<r.width()<<endl;
    r.perimeter();
    r.area();


}
