#include <bits/stdc++.h>
using namespace std;

#include "Time.h"
Time::Time(int x)
{
    curtime=x;
    tran();
}

Time::Time(int x,int y,int z)
{
    settime(x,y,z);
}

void Time::settime(int x,int y,int z)
{
    sethour(x);
    setminute(y);
    setsecond(z);
}

void Time::sethour(int x)
{
    if(x>=0&&x<24)
        hour=x;
    else
        throw invalid_argument("hour must be 0-23");
}

void Time::setminute(int x)
{
    if(x>=0&&x<60)
        minute=x;
    else
        throw invalid_argument("minute must be 0-59");
}

void Time::setsecond(int x)
{
    if(x>=0&&x<60)
        second=x;
    else
        throw invalid_argument("second must be 0-59");
}

unsigned int Time::gethour() const
{
    return hour;
}

unsigned int Time::getminute() const
{
    return minute;
}

unsigned int Time::getsecond() const
{
    return second;
}

void Time::printfuniversal() const
{
    cout<<setfill('0')<<setw(2)<<gethour()<<":"<<setw(2)<<getminute()<<":"<<setw(2)<<getsecond()<<endl;
}

void Time::printfstandard() const
{
    cout<<((gethour()==0||gethour()==12)?12:gethour()%12)<<":"<<setfill('0')<<setw(2)<<getminute()<<":"<<setw(2)<<getsecond()<<(hour<12?"AM":"PM")<<endl;
}

void Time::tran()
{
    long long sum=curtime%86400;

    int flag=(sum/3600);
    sum-=(3600*flag);
    sethour(flag+8);
    flag=(sum/60);
    sum-=(60*flag);
    setminute(flag);
    setsecond(sum);
}

void Time::tick()
{
    for(int i=1;i<=10;i++){
        curtime++;
        tran();
        printfstandard();
        printfuniversal();
    }
}
