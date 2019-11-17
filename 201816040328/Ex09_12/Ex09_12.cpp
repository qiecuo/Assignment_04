#include"Point.h"
#include"Rectangle.h"
#include<iostream>

using namespace std;

int main()
{
    Point aPoint(5,1);
    Point bPoint(5,6);
    Point cPoint(11,1);
    Point dPoint(11,6);
    Point ePoint(10,1);
    Point fPoint(10,6);
    Rectangle rectangle1(aPoint,bPoint,cPoint,dPoint);
    Rectangle rectangle2(aPoint,bPoint,ePoint,fPoint);
    cout << "rectangle1 perimeter is : " << rectangle1.perimeter() << endl;
    cout << "rectangle1 area is : " << rectangle1.perimeter() << endl;
    //rectangle1.isSquare(rectangle1.getLength(),rectangle1.getWidth());
    cout << "rectangle2 perimeter is : " << rectangle2.perimeter() << endl;
    cout << "rectangle2 area is : " << rectangle2.area() << endl;
    //rectangle2.isSquare(rectangle2.getLength(),rectangle2.getWidth());

}
