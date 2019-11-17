#include <iostream>

using namespace std;
#include "Rectangle.h"

int main()

{
    Rectangle rectangle(2,2,2,4,4,4,4,2);

    cout <<"Length="<<rectangle.getLength()<<" Width=" <<rectangle.getWidth()<<endl;
    cout<<"Perimeter="<<rectangle.calculatePerimeter()<<" Area="<<rectangle.calculateArea()<<endl;
}
