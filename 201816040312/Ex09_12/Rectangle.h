//头文件
#include"Point.h"
using namespace std;

class Rectangle
{
public:
    Rectangle(const Point&);
    double perimeter();//计算长方形的周长
    double area();//计算长方形的面积
private:
    //double width,length;//创建长和宽两个变量
    Point complex;
};
