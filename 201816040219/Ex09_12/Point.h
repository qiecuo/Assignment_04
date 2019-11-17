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
    void draw();//function of draw
    void setFillCharacter(char external);//rectangle external figure
    void setFillPerimeterCharacter(char within);//rectangle within figure
    int getlength();//get length
    int getwidth();//get width
private:
    int lengthh;
    int widthh;
    char external;
    char within;

};




