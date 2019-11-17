#include <iostream>

using namespace std;
#include"Rectangle.h"
int main()
{
    Rectangle a;
    a.print();
    a.setCoor(1,2,1,3,2,3,2,2);
    a.judge();
    a.print();
    a.peri();
    a.area();
    return 0;
}
