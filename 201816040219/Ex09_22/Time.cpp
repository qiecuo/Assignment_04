#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Time.h"
using namespace std;

Time::Time(int hour,int minute,int second)
{
    setTime(hour,minute,second);
}

void Time::timechange()
{
    time(&time1);//time function evaluation
    localtime(&time2);//localtime function evaluation
}
void Time::printTime()
{
    cout<<"The time is :"<<endl;
    cout<<time1<<endl;
    cout<<"The localtime is :"<<endl;
    cout<<time2<<endl;

}
void Time::setTime(int h,int m,int s)//Initialization time
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}
/*function of hour minute second , set and get function */
void Time::setHour(int h )
{
    if(h>=0&&h<24)
    {
        hour=h;

    }


    else
        throw invalid_argument("minute must be 0-23");

}
unsigned int Time::getHour() const
{
    return hour;
}

void Time::setMinute(int m )
{
    if(m>=0&&m<60)
    {
        minute=m;

    }

    else
        throw invalid_argument("minute must be 0-59");

}
unsigned int Time::getMinute() const
{
    return minute;
}

void Time::setSecond(int s )
{
    if(s>=0&&s<60)
    {
        second=s;

    }

    else
        throw invalid_argument("minute must be 0-59");

}
unsigned int Time::getSecond() const
{
    return second;
}

void Time::timetick()//Add one second to the time
{
    second=second+1;
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
void Time::Night_time(int sumt)//Initialization time2
{
    int h,m,s,a;

    h=sumt/3600;
    a=sumt%3600;
    m=a/60;
    a=a%60;
    s=a;

    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::printUniversal() const//print Universal time
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"
      <<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
}

void Time::printStandard() const//print Standard time
{
    cout<<((getHour()==0||getHour()==12)?12:getHour()%12)
        <<":"<<setfill('0')<<setw(2)<<getMinute()
        <<":"<<setw(2)<<getSecond()<<(hour<12?"AM":"PM");
}


