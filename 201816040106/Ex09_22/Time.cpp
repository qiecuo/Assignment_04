#include<iostream>
#include<iomanip>
#include<stdexcept>
#include<ctime>
#include"Time.h"
using namespace std;
Time::Time(int totalsecond) 
{
    setTime(totalsecond/3600,totalsecond%3600/60,totalsecond%3600%60);
}
Time::Time(int hour,int minute,int second)
{
    setTime(hour,minute,second);
}
Time::Time(time_t now)
{
    struct tm *tm_now;
    time(&now);
    tm_now = localtime(&now);
    setTime(tm_now->tm_hour,tm_now->tm_min,tm_now->tm_sec);
}
void Time::setTime(int h,int m,int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}
void Time::setHour(int h)
{
    if(h>=0&&h<24)
        hour=h;
    else
        throw invalid_argument("hour must be 0~23");
}
void Time::setMinute(int m)
{
    if(m>=0&&m<60)
        minute=m;
    else
        throw invalid_argument("minute must be 0~59");
}
void Time::setSecond(int s)
{
    if(s>=0&&s<60)
        second=s;
    else
        throw invalid_argument("second must be 0~59");
}
unsigned int Time::getHour() const
{
    return hour;
}
unsigned int Time::getMinute() const
{
    return minute;
}
unsigned int Time::getSecond() const
{
    return second;
}
void Time::printUniversal() const
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<endl;
}
void Time::printStandard() const
{
    cout<<((getHour()==0||getHour()==12)?12:getHour()%12)<<":"<<setfill('0')<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<(hour<12?"AM":"PM")<<endl;
}
void Time::tick()
{
    int m=getSecond();
    m++;
    if(m<=59)   setSecond(m);
    else{
        setSecond(0);
        minute++;
        if(minute<=59)  setMinute(minute);
        else{
            setMinute(0);
            hour++;
            if(hour<=23) setHour(hour);
            else{
                setHour(0);
            }
        }
    }
    
}
