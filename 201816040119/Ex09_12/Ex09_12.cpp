#include <iostream>
#include<math.h>
using namespace std;
#include"Rectangle.h"
Rectangle::Rectangle(double a,double b)
{
    Length=1;
    Width=1;
}
void Rectangle::setCoor(double a,double b,double c,double d,double e,double f,double g,double h)
{
    if(a<20&&b<20&&c<20&&d<20&&e<20&&f<20&&g<20&&h<20)
    {
        x1=a,x2=c,x3=e,x4=g;
        y1=b,y2=d,y3=f,y4=h;
    }
    else
        cout<<"set error";
}
void Rectangle::area()
{
    cout<<"the area is"<<Length*Width<<endl;
}
void Rectangle::peri()
{
    cout<<"the perimemter"<<2*(Length+Width)<<endl;
}
void Rectangle::judge()
{
   int i,t1,t2,t3,t4;
   double max,min,max1,min1,max2,min2;
   double a[4]={x1,x2,x3,x4};
   double b[4]={y1,y2,y3,y4};
   max=min=x1;
   t1=0;
   t2=0;
   for(i=1;i<4;i++)
   {
       if(max<a[i])
        {
            t1=i;
            max=a[i];
        }
       if(min>a[i])
        {
            t2=i;
            min=a[i];
        }
   }
   for(i=0;i<4;i++)
   {
        if(i!=t1&&i!=t2)
   {
       t3=i;
       break;
   }
   }
   for(i=0;i<4;i++)
   {
       if(i!=t1&&i!=t2&&i!=t3)
   {
       t4=i;
       break;
   }
   }
   max=sqrt((a[t1]-a[t2])*(a[t1]-a[t2])+(b[t1]-b[t2])*(b[t1]-b[t2]));
   min=sqrt((a[t4]-a[t3])*(a[t4]-a[t3])+(b[t4]-b[t3])*(b[t4]-b[t3]));
   max1=sqrt((a[t1]-a[t3])*(a[t1]-a[t3])+(b[t1]-b[t3])*(b[t1]-b[t3]));
   min1=sqrt((a[t1]-a[t4])*(a[t1]-a[t4])+(b[t1]-b[t4])*(b[t1]-b[t4]));
   max2=sqrt((a[t2]-a[t3])*(a[t2]-a[t3])+(b[t2]-b[t3])*(b[t2]-b[t3]));
   min2=sqrt((a[t2]-a[t4])*(a[t2]-a[t4])+(b[t2]-b[t4])*(b[t2]-b[t4]));
   if((max!=min)||(max1!=min2)||(min1!=max2))
    cout<<"flase"<<endl;
    else
    {
        if(max1<min1)
           {
               Length=min1;
                Width=max1;
           }
        else
        {
            Length=max1;
           Width=min1;
        }
    }
}
void Rectangle::print()const
{
    cout<<"the length is:"<<Length<<endl;
    cout<<"the width is:"<<Width<<endl;
}
