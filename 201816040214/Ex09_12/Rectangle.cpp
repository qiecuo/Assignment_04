#include <iostream>
#include "Rectangle.h"

using namespace std;
//build a constructor ,and default length and width as 1

Rectangle::Rectangle(double x, double y)
{
    setX(x);
    setY(y);
}//initialize 4 points ,and confirm their values is between 0 and 20

void Rectangle::setX(double x)
{
    if(x > 0 && x < 20)
    {
        x_coordinate = x;
    }else{
        cout << "input worry!" << endl;
        setX(x);
    }
}

double Rectangle::getX() const
{
    return x_coordinate;
}

void Rectangle::setY(double y)
{
    if(y > 0 && y < 20)
    {
        y_coordinate = y;
    }else{
        cout << "input worry!" << endl;
        setY(y);
    }
}

double Rectangle::getY() const
{
    return y_coordinate;
}

double Rectangle::getlength(const Rectangle &horn2)
{
    double length;
    Rectangle horn1(x_coordinate, y_coordinate);
    if(horn1.getY() == horn2.getY())
    {
        if(horn1.getX()<horn2.getX())
        {
            length = horn2.getX() - horn1.getX();
        }else{
            length = horn1.getX() - horn2.getX();
        }
    }else{
        cout << "\nThese two coordinates are not on the same horizontal line." << endl;
    }
    return length;
}//return length

double Rectangle::getwidth(const Rectangle &horn3)
{
    double width;
    Rectangle horn1(x_coordinate, y_coordinate);
    if(horn1.getX() == horn3.getX())
    {
        if(horn1.getY()<horn3.getY())
        {
            width = horn3.getY() - horn1.getY();
        }else{
            width = horn1.getY() - horn3.getY();
        }
    }else{
        cout << "\nThese two coordinates are not on the same vertical line." << endl;
    }
    return width;
}//return width

double countperimeter(double a, double b)
{
    return (a+b)*2;
}
//count perimeter
double countarea(double a, double b)
{
    return a*b;
}
//count area
void equal_square(double a, double b)
{
    if(a == b)
        cout << "This rectangle is a square." << endl;
        else
            cout << "This rectangle is not a square." << endl;
}//judge if the rectangle is a square

