#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h" //Call the time.h function
using namespace std;

Time::Time()
{
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);  //Use the time function to get the current time and assign it to rawtime
    timeinfo = localtime(&rawtime); //Use the localtime function to get the current time and convert it into seconds
    setSecond(rawtime);
    sethour(timeinfo->tm_hour);
    setminute(timeinfo->tm_min);
    setsecond(timeinfo->tm_sec);
    printseconds();//Standard format for output time
    printtime();//Total number of seconds output
}
void Time::sethour(int h)
{
    hour=h;
}
void Time::setminute(int m)
{
    minute=m;;
}
void Time::setsecond(int s)
{
    second=s;
}
int Time::gethour()const
{
    return hour;
}
int Time::getminute()const
{
    return minute;
}
int Time::getsecond()const
{
    return second;
}
void Time::setSecond(time_t rawtime)
{
    Second=rawtime;
}
time_t Time::getSecond() const
{
    return Second;
}
void Time::tick() //Total seconds plus one
{
    Second++;
}
void Time::printseconds()
{
    cout << "The total number of seconds is:" << (hour*3600+minute*60+second)<< "s"<<endl;
}
void Time::printtime()
{
    cout<<"local time: "<<setfill('0')<<setw(2)<<((hour)>12?hour-12:hour)
    <<":"<<setw(2)<<minute<<":"<<setw(2)<<second <<" "<<((hour)>12?"pm":"am")<<"\n";
}
