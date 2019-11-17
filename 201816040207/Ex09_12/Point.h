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
    void draw();//绘制函数
    void setFillCharacter(char out);//长方形外的字符获取
    void setFillPerimeterCharacter(char in);//得到长方形的字符
    int getlength();//获取长度
    int getwidth();//获取宽度
private:
    int lengthdata;
    int widthdata;
    char outdata;//长方形外的字符
    char indata;//长方形的字符

};




