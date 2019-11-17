#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Time.h"
using namespace std;

Time::Time(int hour,int minute,int second)
{
    setTime(hour,minute,second);//时间的初始化
}

void Time::timechange()
{
    time(&tdata1);//time函数给tdata1赋值
    localtime(&tdata2);//localtime函数给tdata2赋值
}
void Time::printTime()
{
    cout<<"The time is :"<<endl;
    cout<<tdata1<<endl;//打印tdata1
    cout<<"The localtime is :"<<endl;
    cout<<tdata2<<endl;//打印tdata2

}
void Time::setTime(int h,int m,int s)
{
    setHour(h);//小时初始化
    setMinute(m);//分钟初始化
    setSecond(s);//秒初始化
}
void Time::setHour(int h )//小时数据的要求与赋值
{
    if(h>=0&&h<24)
    {
        hour=h;
    }
    else
        throw invalid_argument("minute must be 0-23");

}
void Time::setMinute(int m )//分钟数据的要求与赋值
{
    if(m>=0&&m<60)
    {
        minute=m;
    }
    else
        throw invalid_argument("minute must be 0-59");

}
void Time::setSecond(int s )//秒数据要求与赋值
{
    if(s>=0&&s<60)
    {
        second=s;
    }
    else
        throw invalid_argument("minute must be 0-59");

}
void Time::timetick()//将时间加一秒后的时间
{
    second++;
    if(second==60)
    {
        minute++;
        second=0;
    }
    if(minute==60)
    {
        hour++;
        minute=0;
    }
    if(hour==24)
    {
        hour=0;
    }
}
void Time::timein(int all)//自午夜以来的时间初始化
{
    int h,m,s;
    int joy;
    h=all/3600;
    joy=all%3600;
    m=joy/60;
    joy=joy%60;
    s=joy;
    setHour(h);
    setMinute(m);
    setSecond(s);
}
unsigned int Time::getHour() const//得到小时
{
    return hour;
}
unsigned int Time::getMinute() const//得到分钟
{
    return minute;
}
unsigned int Time::getSecond() const//得到秒数
{
    return second;
}
void Time::printUniversal() const//打印时间
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"
      <<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
}
void Time::printStandard() const//打印时间
{
    cout<<((getHour()==0||getHour()==12)?12:getHour()%12)
        <<":"<<setfill('0')<<setw(2)<<getMinute()
        <<":"<<setw(2)<<getSecond()<<(hour<12?"AM":"PM");
}


