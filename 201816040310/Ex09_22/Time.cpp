#include "Time.h"
#include <iostream>
#include <iomanip>
using namespace std;
Time::Time(time_t curSec)
{
	setTime(curSec);
}
void Time::tick()
{
	sec = (sec + 1) % 86400; // add 1 ,mod 86400 defens sec overflow
}
void Time::setTime(time_t curSec)
{
	sec = (curSec + 28800) % 86400; // add 8 hours ,to get Beijin time
}
int Time::getHour()
{
	return sec / 3600; // hour = sec /3600
}
int Time::getMinute()
{
	return (sec % 3600) / 60; // min = (sec MOD 3600) / 60
}
int Time::getSecond()
{
	return sec % 60; // sec = sec MOD 60
}
void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
	
}

Time &Time::setHour(int h)
{
	if (h < 0 || h >= 24) // Verify the validity of the data
	{
		cout << "error , hour out of range [0,23]" << endl;
		return *this;
	}
	sec = sec % 3600 + h * 3600; // current min and sec + h*3600 (s)
	return *this;
}
Time &Time::setMinute(int m)
{
	if (m < 0 || m > 60) // Verify the validity of the data
	{
		cout << "error, minute out of range [0,59]" << endl;
		return *this;
	}
	sec = getHour() * 3600 + m * 60 + sec % 60;
	return *this;
}

Time &Time::setSecond(int s)
{
	if (s < 0 || s > 60) // Verify the validity of the data
	{
		cout << "error,second out of range [0,59]" << endl;
		return *this;
	}
	sec = getHour() * 3600 + getMinute() * 60 + s;
	return *this;
}

void Time::printUniversal() // display suniversal time
{
	cout << setfill('0') << setw(2) << getHour() << ":"
		 << setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
}
void Time::printStandard() // display standard time
{
	cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM") << endl;
}
