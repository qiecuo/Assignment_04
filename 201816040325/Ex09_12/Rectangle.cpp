#include<iostream>
#include "Rectangle.h"
#include "Point.h"
#include "math.h"
using namespace std;


Rectangle::Rectangle(Point& a,Point& b,Point& c,Point& d)
{
    setPoint(a,b,c,d);
}

double Rectangle::Length()
{
    double L1=(A.getx()-B.getx())*(A.getx()-B.getx())+(A.gety()-B.gety())*(A.gety()-B.gety());
    double L2=(A.getx()-C.getx())*(A.getx()-C.getx())+(A.gety()-C.gety())*(A.gety()-C.gety());
    double L3=(D.getx()-A.getx())*(D.getx()-A.getx())+(D.gety()-A.gety())*(D.gety()-A.gety());

    array<double,3>n={L1,L2,L3};
    int k=3;
    for(int i=0;i<k;i++)
    {
        for(int j=1;j<k;j++)
        {
            if(n[j]<=n[j-1])
            {
                double temp=n[j];
                n[j]=n[j-1];
                n[j-1]=temp;
            }
        }
        k=k-1;
    }
    return sqrt(n[1]);
}

double Rectangle::Width()//获取宽
{
    //这三个变量表示长方形的长 宽 和对角线长度
    double L1=(A.getx()-B.getx())*(A.getx()-B.getx())+(A.gety()-B.gety())*(A.gety()-B.gety());
    double L2=(A.getx()-C.getx())*(A.getx()-C.getx())+(A.gety()-C.gety())*(A.gety()-C.gety());
    double L3=(D.getx()-A.getx())*(D.getx()-A.getx())+(D.gety()-A.gety())*(D.gety()-A.gety());

    array<double,3>n={L1,L2,L3};//存入array对象n，然后由小到大排序
    int k=3;
    for(int i=0;i<k;i++)
    {
        for(int j=1;j<k;j++)
        {
            if(n[j]<=n[j-1])
            {
                double temp=n[j];
                n[j]=n[j-1];
                n[j-1]=temp;
            }
        }
        k=k-1;
    }
    //排序后n[0]存的是宽，你n[1]存的是长，n[2]存的是对角线长度
    return sqrt(n[0]);
}

double Rectangle::Perimeter()//获取周长
{
    return Length()+Width();
}

double Rectangle::Area()//获取面积
{
    return Length()*Width();
}
void Rectangle::setPoint(Point& a,Point& b,Point& c,Point& d)
{
      if((0.0<=a.getx()&&a.getx()<20.0)&&(0.0<=a.gety()&&a.gety()<20.0)&&(0.0<=b.getx()&&b.getx()<20.0)&&(0.0<=b.gety()&&b.gety()<20)&&
         (0.0<=c.getx()&&c.getx()<20.0)&&(0.0<=c.gety()&&c.gety()<20.0)&&(0.0<=d.getx()&&d.getx()<20.0)&&(0.0<=d.gety()&&d.gety()<20.0))//判断下x，y是否有效
     {
         //求四边形六条边的平方和，然后存入array对象p中
         double L1=(a.getx()-b.getx())*(a.getx()-b.getx())+(a.gety()-b.gety())*(a.gety()-b.gety());
         double L2=(b.getx()-c.getx())*(b.getx()-c.getx())+(b.gety()-c.gety())*(b.gety()-c.gety());
         double L3=(c.getx()-d.getx())*(c.getx()-d.getx())+(c.gety()-d.gety())*(c.gety()-d.gety());
         double L4=(d.getx()-a.getx())*(d.getx()-a.getx())+(d.gety()-a.gety())*(d.gety()-a.gety());
         double L5=(a.getx()-c.getx())*(a.getx()-c.getx())+(a.gety()-c.gety())*(a.gety()-c.gety());
         double L6=(b.getx()-d.getx())*(b.getx()-d.getx())+(b.gety()-d.gety())*(b.gety()-d.gety());

         array<double,6>p={L1,L2,L3,L4,L5,L6};
         int n=6;
         int j=0,k=0;
         int flag=0;
         for(int i=1;i<=6;i++)//对数组p进行排序
         {
             for(k=0;k<n-1;k++)
             {
                 if(p[k]>p[k+1])
                 {
                     double temp=p[k];
                     p[k]=p[k+1];
                     p[k+1]=temp;
                 }
             }
             n=n-1;
         }

         for(j=0;j<6;j++)//判断是否有三对相等的边
         {
             if(p[j]!=p[j+1])
             {
                 flag=1;
                 break;
             }
             j=j+1;
         }

         if(flag==0)//flag==0，说明有三对相等的边，则该四边形是长方形，初始化该类的数据成员Point对象ABCD
         {
             A=a;
             B=b;
             C=c;
             D=d;
         }
         else
         {
             throw invalid_argument("Can't form a rectangle.");
             cout<<endl;
         }
     }
     else
     {
         throw invalid_argument("x or y size is invalid.");
     }
}
void Rectangle::square()
{
    if(Length()==Width())//长和宽相等时，长方形是正方形
    {
        cout<<"The rectangle is a square."<<endl;
    }
    else
    {
        cout<<"The rectangle is not a square."<<endl;
    }
}
