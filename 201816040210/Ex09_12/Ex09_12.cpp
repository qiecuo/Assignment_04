#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle a(2,2,4,2,4,1,2,1);//construct a
    cout<<"a:length:"<<a.Length()<<"  width:"<<a.Width()<<
        "  perimeter:"<<a.perimeter()<<"  area:"<<a.area()<<endl;
    a.Square();
    cout<<endl;
    Rectangle b(1,1,2,1,2,0,1,0);//construct b
    cout<<"b:length:"<<b.Length()<<"  width:"<<b.Width()<<
        "  perimeter:"<<b.perimeter()<<"  area:"<<b.area()<<endl;
    b.Square();
    return 0;
}
