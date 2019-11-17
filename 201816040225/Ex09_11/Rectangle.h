#include<iostream>
using namespace std;
class Rectangle
{
public:
    Rectangle()
    :length(1),width(1)//length=1,width=1
    {
    }
    double Perimeter();//define the perimeter function
    double Area();//define the area function
    void setLength(double);//define the setlength function
    void setWidth(double);//define the setwidth function
    double getLength();//define the getwidth function
    double getWidth();//define the getwidth function
private://data members
    double length;
    double width;
};
