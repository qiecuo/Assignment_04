#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{

    Rectangle a(10, 12); // get a rectangle which length is  10 and width is 12
    cout << a.getLength() << endl; // display rectangle a's message
    cout << a.getWidth() << endl;
    cout << a.getPerimeter() << endl;
    cout << a.getArea() << endl;

    a.setLength(21); //change the length of a ,it will get fail
    cout << a.getLength() << endl; // display it's msg again
    cout << a.getWidth() << endl;
    cout << a.getPerimeter() << endl;
    cout << a.getArea() << endl;
}