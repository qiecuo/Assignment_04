#include"Point.h"
class Rectangle
{
public:
    Rectangle(point& ,point&,point&,point&);///初始化
    double getlength();///获取长度
    double getwidth();///获取宽度
    double getarea(double ,double);///获取面积
    double getperimeter(double,double);///获取周长
    int judge();///判断形状
private:
    point f1,f2,f3,f4;///4组坐标

};
