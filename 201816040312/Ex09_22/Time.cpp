#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Time.h"
using namespace std;

Time::Time(int second)
{
    settime(second);
}
void Time::settime(int s)
{
    second=s;//将从ctime库中获取的时间赋给second
}

unsigned int Time::gethour()const
{
    int h;
    h=second%86400/3600+8;//将秒转换成0-23的小时
    return h;//返回小时
}
unsigned int Time::getminute()const
{
    int m;
     m=second%3600/60;//将秒转换成0-59的分钟
     return m;//返回分钟
}
unsigned int Time::getsecond()const
{
    int s;
    s=second%60;//将秒转换成0-59之内的秒
    return s;//输出秒
}
void Time::tick()
{
    second+=1;//将秒加一
}
void Time::printuniversal()const//输出24小时制的时间
{
    cout<<setfill('0')<<setw(2)<<gethour()<<":"<<setw(2)<<getminute()<<":"<<setw(2)<<getsecond();
}
void Time::printstandard()const//输出12小时制的时间
{
    cout<<((gethour()==0||gethour()==12)?12:gethour()%12)<<":"<<setfill('0')<<setw(2)<<getminute()<<":"<<setw(2)<<getsecond()<<(second%86400/3600+8<12?"AM":"PM");
}
