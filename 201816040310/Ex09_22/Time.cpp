#include "Time.h"
#include <iostream>
#include <iomanip>
using namespace std;
Time::Time(time_t curSec)
{
    sec = curSec % 86400 + 28800; // add 8 hours ,to get Beijin time
}
void Time::tick()
{
    sec=(sec+1)%86400;
}
void Time::setTime(time_t curSec)
{
    sec = curSec % 86400;
}
int Time::getHour()
{
    return sec / 3600;
}
int Time::getMinute()
{
    return (sec % 3600) / 60;	
}
int Time::getSecond()
{
    return sec % 60;
}
void Time::setTime(int h,int m,int s){
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::setHour(int h){
	if(h<0||h>=24){
			cout<<"error , hour out of range [0,23]"<<endl;
			return;
	}
	sec=sec%3600+h*3600;	
}
void Time::setMinute(int m){
	if(m<0||m>60){
			cout<<"error, minute out of range [0,59]"<<endl;
			return;
	}
	sec=getHour()*3600+m*60+sec%60;
}

void Time::setSecond(int s){
	if(s<0||s>60){
		cout<<"error,second out of range [0,59]"<<endl;
		return;
	}
	sec=getHour()*3600+getMinute()*60+s;
}

void Time::printUniversal()
{
    cout << setfill('0') << setw(2) << getHour() << ":"
         << setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
}
void Time::printStandard()
{
    cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM") << endl;
}

