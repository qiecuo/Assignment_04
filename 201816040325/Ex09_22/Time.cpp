//Time.cpp

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
#include "ctime"
using namespace std;

Time::Time( int hour, int minute, int second)
{
    setTime( hour,minute, second );
}

Time::Time()
{
    time_t t;//time_t是一个结构体，t指向结构体
    time(&t);
    //北京时间
    tm *p=localtime(&t);//tm是一个结构体

    setTime( p->tm_hour,p->tm_min, p->tm_sec );
}


void Time::setTime(int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour( int h)
{
    if (h >= 0&&h< 24 )
        hour = (24-hour)*60*60;//把秒数存到hour里
    else
        throw invalid_argument("hour must be 0-23");
}

void Time::setMinute( int m)
{
    if (m >= 0 &&m<60)
        minute=m*60;//把秒数存到hour里
    else
        throw invalid_argument("minute must be 0-59");
}

void Time::setSecond(int s )
{
    if (s >= 0 &&s<60)
        second=s;
    else
        throw invalid_argument("second must be 0-59");
}

unsigned int Time::getHour() const
{
    return hour;

}

unsigned Time::getMinute() const
{
    return minute;
}

unsigned Time::getSecond() const
{
    return second;
}

void Time::printUniversa1()const
{
    /*cout<<"Universal time is:";

    cout << setfill('0')<< setw(2)<< getHour() <<":"
         << setw(2)<< getMinute()<<":"<< setw(2)<< getSecond();*/
         cout<<"The number of seconds since midnight is:";
         cout<<hour+minute+second;//把秒数相加，并输出
}

// print Time in standard-time format CHH:MM:SS AM or PM)
void Time::printStandard() const
{
    /*cout<<"Standard time is:";

    cout <<((getHour()==0||getHour()==12 )?12 : getHour()%12)
         <<":"<<setfill('0')<<setw(2)<<getMinute()
         <<":"<< setw(2) <<getSecond() <<(hour <12 ?"AM":"PM");*/
        cout<<"The number of seconds since midnight is:";
        cout<<hour+minute+second;//把秒数相加，并输出
}// end function printStandard

void Time::tick()
{
    cout<<endl<<endl;


    if(getSecond()+1!=60)
    {
        setSecond(getSecond()+1);
    }
    else
    {
        setSecond(0);
        if(getMinute()+1!=60)
        {
            setMinute(getMinute()+1);
        }
        else
        {
            setMinute(0);
            if(getHour()+1!=24)
            {
                setHour(getHour()+1);
            }
            else
            {
                setHour(1);
            }

        }
    }

}
