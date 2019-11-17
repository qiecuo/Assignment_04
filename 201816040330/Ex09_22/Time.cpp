#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "Time.h"

using namespace std;

Time::Time(int hour,int minute,int second)
{
    setTime(hour,minute,second);
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
        throw invalid_argument("hour must be 0-23");

}


void Time::setMinute(int m)
{
    if (m>=0&&m<60)
        minute=m;
    else
        throw invalid_argument("minute must be 0-59");
}

void Time::setSecond(int s)
{
    if(s>=0&&s<60)
        second=s;
    else
        throw invalid_argument("second must be 0-59");
}

unsigned int Time::getHour()const
{
    return hour;
}

unsigned Time::getMinute()const
{
    return minute;
}


unsigned int Time::getSecond()const
{
    return second;
}

void Time::printUniversal()const
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
}

void Time::printStandard()const
{
    cout<<((getHour()==0||getHour()==12)?12:getHour()%12)<<":"
    <<setfill('0')<<setw(2)<<getMinute()<<":"<<setw(2)
    <<getSecond()<<(hour<12?"AM":"PM");
}


void Time::tick(int h,int m,int s)
{
    int i;
for(i=0;i<8;i++)
{
    s++;
    if(s>=60)
    {
        m++;
        if(m>=60)
        {
            h++;
        }
    }
    cout<<endl;
    cout<<"Use time:"<<h<<":"<<m<<":"<<s<<endl;
}

}
Time::Time()
{
    const tm*localTime=localtime(currentTime);
    setTime(localTime->hour,localTime->mine,localTime->sec);

}
void setTime(int hour,int mine,int sec)
{
    /*time nowtime;
    nowtime=time();*/
    int t=time(NULL);
    int h=(t/3600)%24+8;
    int m=(t/60)%60;
    int s=t%60;
    //cout<<h<<":"<<m<<":"<<s<<endl;
}
void printTime()
{
    int h,s,m;
    cout<<h<<":"<<m<<":"<<s<<endl;
}
void printLocaltime()
{
    cout<<localTime->tm_hour<<":"<<localTime->tm_min<<":"<<localTime->tm_sec<<endl;
}

