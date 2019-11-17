#include"Point.h"
#include"Rectangle.h"
#include<bits/stdc++.h>
using namespace std;
Rectangle::Rectangle( point &x1, point &x2, point &x3, point &x4)
    :f1(x1),f2(x2),f3(x3),f4(x4){}
double Rectangle::getlength()///获取长度
{
    ///因为给出的是正的长方形则可以通过判断x，y坐标是否相同来获取边长
    double l1=(f1.gety()==f2.gety())?abs(f1.getx()-f2.getx()):0;///三种情况
    double l2=(f1.gety()==f3.gety())?abs(f1.getx()-f3.getx()):0;
    double l3=(f1.gety()==f4.gety())?abs(f1.getx()-f4.getx()):0;
    double l=max(l1,max(l2,l3));///获取一组边长
    double w1=(f1.getx()==f2.getx())?abs(f1.gety()-f2.gety()):0;///三种情况
    double w2=(f1.getx()==f3.getx())?abs(f1.gety()-f3.gety()):0;
    double w3=(f1.getx()==f4.getx())?abs(f1.gety()-f4.gety()):0;
    double w=max(w1,max(w2,w3));///获取另一组边长
    return max(w,l);///两边长的一个为长度


}
double Rectangle::getwidth()///同上
{
    double l1=(f1.gety()==f2.gety())?abs(f1.getx()-f2.getx()):0;
    double l2=(f1.gety()==f3.gety())?abs(f1.getx()-f3.getx()):0;
    double l3=(f1.gety()==f4.gety())?abs(f1.getx()-f4.getx()):0;
    double l=max(l1,max(l2,l3));
    double w1=(f1.getx()==f2.getx())?abs(f1.gety()-f2.gety()):0;
    double w2=(f1.getx()==f3.getx())?abs(f1.gety()-f3.gety()):0;
    double w3=(f1.getx()==f4.getx())?abs(f1.gety()-f4.gety()):0;
    double w=max(w1,max(w2,w3));
    return min(w,l);///两边短的一个为宽度
}
double Rectangle::getarea(double l,double w)
{
    return l*w;///算面积
}
double Rectangle::getperimeter(double l,double w)
{
    return (l+w)*2;///算周长
}
int Rectangle::judge()
{
     double l1=(f1.gety()==f2.gety())?abs(f1.getx()-f2.getx()):0;
    double l2=(f1.gety()==f3.gety())?abs(f1.getx()-f3.getx()):0;
    double l3=(f1.gety()==f4.gety())?abs(f1.getx()-f4.getx()):0;
    double l=max(l1,max(l2,l3));
    double w1=(f1.getx()==f2.getx())?abs(f1.gety()-f2.gety()):0;
    double w2=(f1.getx()==f3.getx())?abs(f1.gety()-f3.gety()):0;
    double w3=(f1.getx()==f4.getx())?abs(f1.gety()-f4.gety()):0;
    double w=max(w1,max(w2,w3));
    return (w==l)?1:0;///1为正方形 反之
}
