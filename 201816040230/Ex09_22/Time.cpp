#include<iostream>
#include <ctime>
#include <iomanip>
using namespace std;
#include "Time.h"

Time::Time()//构造函数
{
   const time_t currentTime = time( 0 );
   const tm*localTime = localtime( &currentTime );
   setTime( localTime->tm_hour, localTime->tm_min, localTime->tm_sec );
}
void Time::setTime( int h, int m, int s )
{
   setHour( h );
   setMinute( m );
   setSecond( s );
}
void Time::setHour(int h)//时的set函数
{
   if(h>=0&&h<24)
   {
       hour=h;
   }

 else
    throw invalid_argument("hour must be 0-23");//如果时不在规定范围内运行停止
}
void Time::setMinute(int m)//分的set函数
{
    if(m>=0&&m<60)
    {
         minute=m;
    }

    else
      throw invalid_argument("minute must be 0-59");//如果分不在规定范围内运行停止
}
void Time::setSecond(int s)//秒的set函数
{
    if(s>=0&&s<60)
    {
        second=s;
    }

    else
      throw invalid_argument("second must be 0-59");////如果秒不在规定范围内运行停止
}
int Time::getHour()//时的get函数
{
    return hour;
}
int Time::getMinute()//分的get函数
{
    return minute;
}
int Time::getSecond()//秒的get函数
{
    return second;
}
void Time::tick()//时间递增一秒的函数
{
    if(second+1>59&&minute+1>59&&hour+1<24)
    {
        hour=hour+1;
        minute=0;
        second=0;
    }
    else if(second+1<60)
    {
        second=second+1;
    }
   else if(second+1>59&&minute+1<60)
    {
     minute=minute+1;
        second=0;

    }
    else if(second+1>59&&minute>=59&&hour>=23)
    {
        hour=0;
        minute=0;
        second=0;

    }

}
int Time::Second()//以秒显示的函数
{

    return second+minute*60+hour*3600;
}
void Time::printUniversal()//以24时制的输出函数
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
}
void Time::printStandard()//以12时制分AM PM的输出函数
{
    cout<<((getHour()==0||getHour()==12)?12:getHour()%12)<<":"<<setfill('0')<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<(hour<12||hour>=24?"AM":"PM");
}
