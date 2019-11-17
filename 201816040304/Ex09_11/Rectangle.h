// Ex09_11:Rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    Rectangle(double =1.0 , double =1.0 ); //构造函数
    void setLength(double); // 长度set函数
    double getLength(); // 长度get函数
    void setWidth(double); // 宽度set函数
    double getWidth(); // 宽度get函数
    double calculatePerimeter();// 计算周长的函数
    double calculateArea(); //计算面积的函数
private:
    double Length; //数据成员 长度
    double Width; //数据成员 宽度
};

#endif
