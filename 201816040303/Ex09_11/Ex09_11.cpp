#include <iostream>

using namespace std;

#include"Rectangle.h"

int main()
{
    Rectangle rectangle(16,9);
    cout << "Circumference:\t" << rectangle.circumference() << "\nArea:\t\t" <<rectangle.area() <<endl;
    return 0;
}
