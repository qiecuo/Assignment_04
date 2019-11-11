#include<iostream>
#include"Rectangle.h"
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
    perimeter = 2*lengthdata+2*widthdata;
    return perimeter;
}
int Rectangle::area()
{
    int area;
    area = lengthdata*widthdata;
    return area;
}
void Rectangle::setlength(int length)
{
    lengthdata = length;
}
void Rectangle::setwidth(int width)
{
    widthdata = width;
}
void Rectangle::draw()
{

    int l=(25-lengthdata)/2;//求除了长方形的长剩下的长
    int w=(25-widthdata)/2;//求除了长方形的宽剩下的宽
    int i,k;
    //外部构造循环
    for( i = 0;i<25;i++)
    {
        if(i==0||i==24)
        {   for(int j =0; j <25;j++)
                {
                    cout<<outdata<<" ";
                }
                cout<<endl;
        }
        //内部构造循环
        else if(i==w-1)
        {

            for(i=w-1;i<w+widthdata-1;i++)
            {
                cout<<outdata<<setw((l)*2);
                if(i==w-1||i==w+widthdata-2)
                {
                    for(k=0;k<lengthdata;k++)
                    {
                        if(k==lengthdata-1)
                            cout<<indata;
                        else
                            cout<<indata<<" ";
                    }

                }
                else
                {
                    cout<<indata<<setw((lengthdata-1)*2)<<indata;

                }
                cout<<setw((l)*2)<<outdata<<endl;
            }


        }
        else
        {

            cout<<outdata<<setw(48)<<outdata<<endl;
        }
    }


}
void Rectangle::setFillCharacter(char out)
{

    outdata=out;
}
void Rectangle::setFillPerimeterCharacter(char in)
{
   indata=in;
}

int Rectangle::getlength()
{
    return lengthdata;
}
int Rectangle::getwidth()
{
    return widthdata;
}




