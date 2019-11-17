
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
#include<assert.h>
using namespace std;
// Time constructor initializes each data member

Time::Time()
{
    time_t setTime;
	time(&setTime);
	tm* ptm = localtime(&setTime);

	hour=ptm->tm_hour;
	minute=ptm->tm_min;
	second=ptm->tm_sec;
}

 //获取当前时间

void Time::setTime( int ho, int mi, int se )
{
    setHour( ho );
    setMinute( mi );
    setSecond( se );
}


void Time::setHour( int ho)
{
    hour = ho;
}
//获取小时

void Time::setMinute( int mi )
{
    minute = mi;
}
//获取分钟
void Time::setSecond( int se )
{
    second = se;
}
//获取秒


int Time::getHour()
{
    return hour;
}

 Time::getMinute()
{
    return minute;
}
Time::getSecond()
{
    return second;
}



int Time::printUniversal()
{
    cout<<getHour()*3600+getMinute()*60+getSecond()<<endl;
}//把时分秒换算为秒

