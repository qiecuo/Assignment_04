#include "Time.h"
#include <iostream>
#include <stdexcept>
#include <iomanip>

using namespace std;

Time::Time()
{

}

Time::Time(long int a)
{
    setTime(a);
}

void Time::setTime(long int a)
{
    int temp;
    temp=a%86400;
    this->temp=temp;
}

int Time::getHour()
{
    int h;
    h=temp/3600+8;
    return h;
}

int Time::getMinute()
{
    int m ;
    m=(temp%3600)/60;
    return m;
}

int Time::getSecond()
{
    int s;
    s=(temp%3600)%60;
    return s;
}
void Time::display()
{
    int h, m, s;
    h=getHour();
    m=getMinute();
    s=getSecond();
    if(h>=24)
    {
        h=h%24;
    }
    cout <<((h==0||h ==12)? 12: h%12)<<":"<<setfill('0')<<setw(2)<<m<<":"<<setw(2)<<s;
    cout<<(h<12?" AM ":" PM ")<<endl;
}
void Time::tick(int a)
{
    int b=temp;
    for(int i=0;i<a;i++)
    {
        b+=3600;
        setTime(b);
        display();
    }
}

