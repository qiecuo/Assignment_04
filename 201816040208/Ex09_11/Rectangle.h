
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    Rectangle(double = 1.0, double = 1.0);  //构造函数
    void setLength(double );    //设置长
    double getLength(); //返回长
    void setWidth(double ); //设置宽
    double getWidth();  //返回宽
    int judge(double);  //判断长度是否合理
    double perimater(double a, double b);   //求周长
    double area(double, double); //求面积
private:
    double length;
    double width;
};

#endif // RECTANGLE_H
