#include"Time.h"
#include<stdexcept>
#include<iostream>
#include<iomanip>

using namespace std;

Time::Time(int x)
{
    curTime = x;
    trans();
}

Time::Time(int h, int m, int s)
{
    setTime(h, m, s);
}

void Time::setTime(int h, int m, int s)
{
    //default hour minute second
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h)
{
    //hour must be 0 - 23
    if(h >= 0 and h < 24 )
        hour = h;
    else
        throw invalid_argument("hour must be 0 - 23");
}

void Time::setMinute(int m)
{
    //minute must be 0 - 59
    if(m >= 0 and m < 59)
        minute = m;
    else
        throw invalid_argument("minute must be 0 - 59");
}

void Time::setSecond(int s)
{
    //second must be 0 - 59
    if(s >= 0 and s < 59)
        second = s;
    else
        throw invalid_argument("second must be 0 - 59");
}

unsigned int Time::getHour()const
{
    return hour;
}

unsigned int Time::getMinute()const
{
    return minute;
}

unsigned int Time::getSecond()const
{
    return second;
}

void Time::trans()
{
    long long time = curTime%86400;
    //define a templete temp
    int temp;
    temp = time / 3600;//get hour

    time -= 3600 * temp;

    setHour(temp + 8);

    temp = time / 60;//get minute
    time -= 60 * temp;//get second
    setMinute(temp);
    setSecond(time);
}

void Time::tick()
{
    for(size_t  i = 0; i < 10; ++i)
    {
        curTime++;
        trans();
        printStandard();
        printUniversal();
    }
}

//two functions to show time
void Time::printStandard()const
{
    unsigned int h = getHour();
    cout<<((h == 0 or h == 12) ? 12 : h % 12 )<<":"<<setfill('0')<<setw(2)<<getMinute()<<":"
    <<setw(2)<<getSecond()<<(hour < 12 ? "AM" : "PM")<<endl;
}//end function printStandard

void Time::printUniversal()const
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"
    <<setw(2)<<getMinute()<<":"<<setw(2)<<setw(2)<<getSecond()<<endl;
}
