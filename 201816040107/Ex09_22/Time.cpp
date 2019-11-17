#include <iostream>
#include <ctime>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
using namespace std;
Time::Time(int totalsecond)
{
	settime(totalsecond/3600,totalsecond/3600/60,totalsecond%3600%60);
}
Time::Time(time_t t)
{
	struct tm *x;
	time(&t);
	x=localtime(&t);
	settime(x->tm_hour,x->tm_min,x->tm_sec);	
}
Time::Time(int h,int m,int s)
{
	settime(h,m,s);
}
void Time::settime(int h,int m,int s)
{
	sethour(h);
	setmin(m);
	setsec(s);
}
void Time::sethour(int h)
{
	if(h>=0 && h<24)
	{
		hour=h;
	}
	else
	throw invalid_argument("invalid data(hour)");
}
unsigned int Time::gethour() const
{
	return hour;
}
void Time::setmin(int m)
{
	if(m>=0 && m<60)
	{
		min=m;
	}
	else
	throw invalid_argument("invalid data(minute)");
}
unsigned int Time::getmin() const
{
	return min;
}
void Time::setsec(int s)
{
	if(s>=0 && s<60)
	{
		sec=s;
	}
	else
	throw invalid_argument("invalid data(second)");
}
unsigned int Time::getsec() const
{
	return sec;
}
void Time::printuniversal() const
{
	cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<min<<":"<<setw(2)<<sec<<endl;
}
void Time::printstandard() const
{
	cout<<((hour==0 || hour==12)?12:hour%12)
	<<":"<<setfill('0')<<setw(2)<<min<<":"<<setw(2)<<sec<<(hour<12?"AM":"PM")<<endl;
}
void Time::tick()//tick函数的定义； 
{
	int s=getsec();
	s++;
	if(s<=59)
	{
		setsec(s);
	}
	else
	{
		setsec(0);
		min++;
		if(min<=59)
		{
			setmin(min);	
		}	
		else
		{
			setmin(0);
			hour++;
			if(hour<=23)
			{
				sethour(hour);
			}
			else
			{
				sethour(0);
			}
		}
	}
}
