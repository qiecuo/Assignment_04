#ifndef POINT_H
#define POINT_H

using namespace std;
class Point
{
public:
    Point(double,double,double,double,double,double,double,double);//点的构造函数
    void setpoint1(double,double);
   // double getpoint1();
    void setpoint2(double,double);
   // double getpoint2();
    void setpoint3(double,double);
    //double getpoint3();
    void setpoint4(double,double);
    //double getpoint4();
    void length();
    void width();
    double getlength();
    double getwidth();
    void judge();//判断是否为长方形
private:
    double a1,b1,a2,b2,a3,b3,a4,b4;//8个double型的点
    double width1,length1;//获取长方形的长和宽
};
#endif // POINT_H
