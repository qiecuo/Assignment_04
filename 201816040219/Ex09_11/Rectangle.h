#include<iostream>
#include<string>


class Rectangle
{

public:
    Rectangle(int ,int );
    int perimeter();
    int area();
    void setlength(int );
    void setwidth(int );
    int getlength();
    int getwidth();
private:
    int lengthdata;
    int widthdata;
};




