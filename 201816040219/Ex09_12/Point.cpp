#include<iostream>
#include"Point.h"
#include<string.h>
#include<fstream>
#include<iomanip>
using namespace std;
Rectangle::Rectangle(int length,int width)
{
    setlength(length);
    setwidth(width);
}
int Rectangle::perimeter()
{
    int perimeter;
    perimeter = 2*(lengthh+widthh);
    return perimeter;
}
int Rectangle::area()
{
    int area;
    area = lengthh*widthh;
    return area;
}
void Rectangle::setlength(int length)
{
    lengthh = length;
}
void Rectangle::setwidth(int width)
{
    widthh = width;
}
void Rectangle::draw()//draw rectangle
{

    int l=(25-lengthh)/2;
    int w=(25-widthh)/2;
    int i,k;
    for( i = 0;i<25;i++)
    {
        if(i==0||i==24)
        {   for(int j =0; j <25;j++)
                {
                    cout<<external<<" ";
                }
                cout<<endl;
        }
        else if(i==w-1)
        {

            for(i=w-1;i<w+widthh-1;i++)
            {
                cout<<external<<setw((l)*2);
                if(i==w-1||i==w+widthh-2)
                {
                    for(k=0;k<lengthh;k++)
                    {
                        if(k==lengthh-1)
                            cout<<within;
                        else
                            cout<<within<<" ";
                    }

                }
                else
                {
                    cout<<within<<setw((lengthh-1)*2)<<within;

                }
                cout<<setw((l)*2)<<external<<endl;
            }


        }
        else
        {

            cout<<external<<setw(48)<<external<<endl;
        }
    }


}
void Rectangle::setFillCharacter(char ex)
{

    external=ex;
}
void Rectangle::setFillPerimeterCharacter(char in)
{
   within=in;
}

int Rectangle::getlength()
{
    return lengthh;
}
int Rectangle::getwidth()
{
    return widthh;
}




