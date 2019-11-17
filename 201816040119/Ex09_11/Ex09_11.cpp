#include <iostream>

using namespace std;
#include"Rectangle.h"
int main()
{
    Rectangle ac;
    Rectangle b(15,19);
    cout<<"the initial is:";
    ac.print();
    cout<<"custom value:";
    b.print();
    b.peri();
    b.peri(15,18);
    b.area();
    b.area(15,18);
    return 0;
}
