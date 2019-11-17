#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle a(10.0, 10.0);
    double perimeter, area;

    perimeter = a.perimater(a.getLength(), a.getWidth());
    area = a.area(a.getLength(), a.getWidth());

    cout << "The perimeter is : " << perimeter << endl;
    cout << "The area is : " << area << endl;


}
