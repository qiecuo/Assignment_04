#include <iostream>

using namespace std;
#include "Rectangle.h"

int main()
{
    Rectangle a( 5, 6 );//construct a
    Rectangle b( 3, 10 );//construct b
    cout<<"a.p: "<<a.perimeter()<<endl;
    cout<<"b.a: "<<b.area()<<endl;

    return 0;
}
