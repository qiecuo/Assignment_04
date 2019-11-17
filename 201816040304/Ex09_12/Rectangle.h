// Ex09_11:Rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.h"

class Rectangle
{
public:
    Rectangle(double=0, double=0 , double =0, double =0, double =0, double =0, double=0 , double =0); //构造函数
    void setP(double, double , double , double , double , double , double , double );
    double getLength(); // 长度get函数
    double getWidth(); // 宽度get函数
    double calculatePerimeter();// 计算周长的函数
    double calculateArea(); //计算面积的函数
    void Square();//判断正方形
    bool judgeRectangle();//判断矩形
    double calculateWidth(); // 计算宽度函数
    double calculateLength(); // 计算长度函数
private:
    double Length; //数据成员 长度
    double Width; //数据成员 宽度
    Point A;
    Point B;
    Point C;
    Point D;
};

#endif
