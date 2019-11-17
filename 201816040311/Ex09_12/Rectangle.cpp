#include <iostream>
#include "Rectangle.h"

using namespace std;

//default constructor of the rectangle
Rectangle::Rectangle()
{
    setLength(1);
    setWidth(1);
}

//default constructor of the rectangle
Rectangle::Rectangle(double a, double b)
{
    setLength(a);
    setWidth(b);
}

//set Rectangle's Length
void Rectangle::setLength(double a)
{
    if(a > 0.0 && a<20.0)
    {
        length=a;
    }
    else
    {
        cout<<"error:Length Input nonspecification!"<<endl;
        length=1;
    }

}

//set Rectangle's width
void Rectangle::setWidth(double b)
{
    if(b > 0.0 && b <20.0)
    {
        width=b;
    }
    else
    {
        cout<<"error:Width Input nonspecification!"<<endl;
        width=1;
    }

}

//get Rectangle's Length
double Rectangle::getLength()
{
    return length;
}

//get Rectangle's width
double Rectangle::getWidth()
{
    return width;
}

//get Rectangle area
double Rectangle::area()
{
    return length*width;
}
//get Rectangle perimeter
double Rectangle::perimeter()
{
    return (length+width)*2;
}

//check square
bool Rectangle::square(const Rectangle b)
{
    if(b.length==length&&b.width==width)
    {
        cout << "It is Rectangle"<<endl;
        return true;
    }
    else
    {
        cout<< "error!:Tt is not Rectangle"<<endl;
        return false;
    }
}

