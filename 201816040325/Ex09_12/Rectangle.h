#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Point.h"
#include "array"
using namespace std;


 // RECTANGLE_H_INCLUDED
class Rectangle
{
public:
    Rectangle(Point& ,Point& ,Point& ,Point& );//初始化point的四个对象，该四几个对象分别代表长方形的四个顶点
    double Perimeter();//获取周长
    double Area();//获取面积
    double Length();//获取长度
    double Width();//获取宽度
    void setPoint(Point& ,Point& ,Point& ,Point& );//设置point的四个对象
    void square();//判断长方形是否为正方形
private:
    //数据成员类型为Point，对象ABCD代表长方形的四个点的坐标
    Point A;
    Point B;
    Point C;
    Point D;
};
#endif
