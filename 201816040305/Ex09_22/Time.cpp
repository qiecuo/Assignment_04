#include <iostream>
#include <math.h>
#include <time.h>
#include <string.h>
using namespace std;
//include the head File Rectangle.h
#include "Time.h"
//Constructor

Time::Time()
{
    time(&currentTime);
    struct tm *p;
    p = localtime(&currentTime);
    hour = p->tm_hour ;
    minute = p->tm_min ;
    second = p->tm_sec ;
}
//second+1
void Time::tick()
{
    second = second +1 ;
    if(second == 60)
    {
        second = 0 ;
        minute = minute+1;
        if(minute == 60)
        {
            minute = 0;
            hour = hour+1 ;
            if(hour == 25)
            {
                hour = 1 ;
            }
        }
    }
}

//judge if am or pm
string Time::amORpm()
{
    int ch ;
    string a ;
    ch = hour ;
    if(ch-12 > 0)
        a = "pm" ;
        else
            a = "am" ;
    return a ;
}

//calculate total seconds
int  Time::setSecond()
{
    totalsecond=hour*3600+minute*60+second;
    if(totalsecond>86399)
        totalsecond-=86400;
    return totalsecond ;
}
//display messages
void Time::display()
{
    string a ;
    Time t ;
    a = t.amORpm();
    if(a== "am")
        cout << "The corrent time is "<< hour <<":"<<minute <<":"<<second<<amORpm()<<endl ;
        else
          cout << "The corrent time is "<< hour-12 <<":"<<minute <<":"<<second<<amORpm()<<endl ;
}
