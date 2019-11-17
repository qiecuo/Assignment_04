#include <iostream>
#include"Rectangle.h"

using namespace std;

int main()
{
    Rectangle n;//create n object both width and length are defaulted
    cout<<"Don't initialize n ,print n's length and width ：\n";
    cout<<"length:"<<n.getlength()<<"\nwidth:"<<n.getwidth();
    cout<<endl;
    cout<<"set n's length and width";
    n.setlength(5.0);
    n.setwidth(7.0);
    cout<<"print n's length and width after initialize:\n";
    cout<<"length:"<<n.getlength()<<"\nwidth:"<<n.getwidth()<<endl;
    cout<<"n's perimeter and area:\n";
    cout<<"perimeter:"<<n.perimeter()<<"\narea:"<<n.area()<<endl;
    return 0;
}
