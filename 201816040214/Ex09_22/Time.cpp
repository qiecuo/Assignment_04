#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
using namespace std;
//Time.cpp
Time::Time(int second)
:all_seconds(second)
{
    setHour(0);
    setMinute(0);
}
//constructor function

//set and get functions
void Time::setHour(int h)
{
    hour = all_seconds/3600;
}

unsigned int Time::getHour()
{
    return hour;
}

void Time::setMinute(int m)
{
    all_seconds = all_seconds-hour*3600;
    minute = all_seconds/60;
}

unsigned int Time::getMinute()
{
    return minute;
}

unsigned int Time::getAll_seconds()
{
    return all_seconds;
}

unsigned int Time::getSecond()
{
    all_seconds -= minute*60;
    return all_seconds;
}

void Time::printUniversal()
{
    cout << setfill('0') << setw(2) << getHour() << ":"
    << setw(2) << getMinute() << ":" << setw(2) << getAll_seconds();//output time
}

void Time::printStandard()
{
    cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour()%12)
    << ":" << setfill('0') << setw(2) << getMinute()
    << ":" << setw(2) << getSecond() << (hour < 12 ? " AM" : " PM");//judge afternoon or morning
}


//Ex09_07 -  Time.cpp
/*#include "Time.h"

Time::Time(int hh,int min,int sec)
{
	setTime(hh,min,sec);
}//constructor

Time::~Time()
{
}//destructor

void Time::setTime(int hh, int min, int sec)
//set the time setting
{

	if (hh >= 0 && hh <24)

		hour = hh;

	if (min >= 0 && min < 60)

		minute = min;

	if (sec >= 0 && sec < 60)
		second = sec;
}

void Time::printStandard()
{
	cout <<setw(2)<<setfill('0')<<(( hour % 12==0 && hour>=12) ? 12:hour%12)
	<< ":" <<setw(2)<<setfill('0')<< minute << ":" <<setw(2)<<setfill('0')<< second << ' '
		<<((hour>=12) ? "PM":"AM")<<endl;
}//judge the time



void Time::tick()//add 1s to date
{
	if (second < 59)
		++second;
	else if (minute < 59)
	{
		++minute;
		second = 0;
	}
	else if (hour < 24)
	{
		++hour;
		minute = 0;
		second = 0;
	}
	else
	{
		hour = 0;
		minute = 0;
		second = 0;
	}
}
*/
