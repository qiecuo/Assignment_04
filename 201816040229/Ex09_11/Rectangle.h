#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED



#endif // RECTANGLE_H_INCLUDED

#include <iostream>


using namespace std;


class Rectangle
{
    public:
        Rectangle(int,int);
        void setLength(int);
        int getLength();
        void setWidth(int);
        int getWidth();
        int Perimeter();
        int Area();

    private:
        int length;
        int width;
};

