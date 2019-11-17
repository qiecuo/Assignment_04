#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;

Time::Time (int hour,int minute,int second)
{
	setTime(hour,minute,second);
}
void Time::setTime(int h,int m,int s)
{
	second = 0;
	setHour(h);
	setMinute(m);
	setSecond(s);
}
void Time::setHour(int h) 
{
	second += h*3600; 
}
void Time::setMinute(int m)
{
	second += m*60;
}
void Time::setSecond(int s)
{
	second += s;
}
unsigned int Time::getHour()	const
{
	return second/3600;
}
unsigned int Time::getMinute() const
{
	return second%3600/60;
}
unsigned int Time::getSecond() const
{
	return second%3600%60;
}
void Time::printUniversal() const
{
	cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
}
void Time::printStandard() const
{
	cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<(second/3600 < 12 ? "AM":"PM");
}
