#include <iostream>
#include "Rectangle.h"
#include "Point.h"
#include "math.h"

using namespace std;

Rectangle::Rectangle(Point a,Point b,Point c,Point d )
{
    setRectangle(a,b,c,d);
}

void Rectangle::setRectangle(Point a,Point b,Point c,Point d)//function of setRectangle
{
    setLeftHigh(a);
    setLeftLow(b);
    setRightHigh(c);
    setRightLow(d);
}
void Rectangle::setLeftHigh(Point a)//function of set LH
{
    lh=a;
}
void Rectangle::setLeftLow(Point b)//function of set LL
    {
        ll=b;
    }

void Rectangle::setRightHigh(Point c)//function of set RH
    {
        rh=c;
    }

void Rectangle::setRightLow(Point d)//function of set RL
    {
        rl=d;
    }

Point Rectangle::getLeftHigh()
    {
       return lh;
    }

Point Rectangle::getLeftLow()
    {
        return ll;
    }

Point Rectangle::getRightHigh()
    {
        return rh;
    }

Point Rectangle::getRightLow()
    {
        return rl;
    }

void Rectangle::Length()//for length
    {
        double a,b;
        a=(lh.getX()-ll.getX())*(lh.getX()-ll.getX())+(lh.getY()-ll.getY())*(lh.getY()-ll.getY());
        b=(lh.getX()-rh.getX())*(lh.getX()-rh.getX())+(lh.getY()-rh.getY())*(lh.getY()-rh.getY());
        if(a<b)
        {
            a=b;
        }
        length=sqrt(a);
    }
void Rectangle::Width()//for width
    {
        double a,b;
        b=(lh.getX()-ll.getX())*(lh.getX()-ll.getX())+(lh.getY()-ll.getY())*(lh.getY()-ll.getY());
        a=(lh.getX()-rh.getX())*(lh.getX()-rh.getX())+(lh.getY()-rh.getY())*(lh.getY()-rh.getY());
        if(a>b)
        {
            a=b;
        }
        width=sqrt(a);
    }

void Rectangle::Perimeter()//for perimeter
    {
        perimeter=2*(length+width);
    }

void Rectangle::Area()//for area
    {
        area=length*width;
    }

bool Rectangle::Square()//function of square
    {
        if(getLength()==getWidth())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

double Rectangle::getLength()
    {
        return length;
    }

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::getArea()
{
    return area;
}

double Rectangle::getPerimeter()
{
    return perimeter;
}
