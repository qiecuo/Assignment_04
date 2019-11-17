#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "time.h"
using namespace std;
//Time constructor initializes each data member
Time::Time(int now)
{
    int hour,minte,second;         //将时间戳转化为标准时间
     now=now%86400;
     hour=now/3600+8;
     minte=now%3600/60;
     second=now%3600%60;
    setTime(hour,minte,second);              //进入时间设置函数
}

Time::Time(int hour,int minte,int second )  //进入设置标准时间
{
    setTime(hour,minte,second);              //进入时间设置函数
}
void Time ::setTime(int h,int m,int s)
{
    setHour(h);                            //分别设置时分秒
    setMinute(m);
    setSecond(s);

}
void Time::setHour(int h)           //设置时
{
    if(h>=0&&h<24)
        hour=h;
    else
        hour=0;
}
void Time::setMinute(int m)           //设置分
{
    if(m>=0&&m<60)
        minute=m;
    else
         minute=0;
}

void Time::setSecond(int s)          //设置秒
{
    if(s>=0&&s<60)
        second=s;
    else
        second=0;

}

void Time::tick()             //设置时间增加函数
{
    int a,b,c;

    a=getSecond()+1;
    setSecond(a);

    if(getSecond()==0)                //如果秒为1，分增加1
    {
        b=getMinute()+1;
        setMinute(b);

        if(getMinute()==0)
        {
            c=getHour()+1;
            setHour(c);
        }
    }
}

int Time::getHour()                 //获取时分秒
{
    return hour;
}
int Time::getMinute()
{
    return minute;

}
int Time::getSecond()
{
    return second;
}

void Time::printStandard()                             //打印输出标准函数
{
    cout<<((getHour()==0||getHour()==12)?12:getHour()%12)
    <<":"<<setfill('0')<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<(hour<12?" AM":"PM");
}
