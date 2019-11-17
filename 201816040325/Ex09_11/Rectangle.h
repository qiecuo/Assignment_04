#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED



#endif // RECTANGLE_H_INCLUDED
class Rectangle
{
public:
    Rectangle(double l=1,double w=1);//初始化长和宽
    double Perimeter();//返回周长
    double Area();//返回面积
    void setLength(double );//设置长度
    double getLength();//获取长度
    void setWidth(double );//设置宽度
    double getWidth();//获取宽度
private:
    double length;//长方形的长度
    double width;//长方形的宽度
};
