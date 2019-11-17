#include <iostream>
#include"Rectangle.h"
using namespace std;

int main()
{
    Rectangle r(2,4);//initializes  data
    int perimeter,area;
    perimeter=r.perimeter();
    area = r.area();
    cout<<"The perimeter of the rectangle is equal to :"<<perimeter<<endl;
    cout<<"The area of the rectangle is equal to :"<<area<<endl;
    return 0;
}
