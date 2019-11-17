//Time.cpp
//Time class member-function definition
#include<iostream>
using namespace std;

#include "Time.h"

Time::Time( int Hour, int Minite,int Second )
{
    setHour( Hour);//initialize hour
    setMinite( Minite );//initialize minite
    setSecond( Second );//initialize second
}//end Time constructor
//function get hour
void Time::setHour(int hour)
{
    if(hour>=0&&hour<24)//declare if the data is legal
        Hour = hour;
    else
    {
        cout<<"The hour is illegal!"<<endl;
        Hour = 0;
    }
}//end function get hour
//function get minite
void Time::setMinite(int minite)
{
    if(minite>=0&&minite<60)//declare if the data is legal
        Minite = minite;
    else
    {
        cout<<"The minite is illegal!"<<endl;
        Minite = 0;
    }
}//end function get minite
//function get second
void Time::setSecond(int second)
{
    if(second>=0&&second<60)//declare if the data is illegal
        Second = second;
    else
    {
        cout<<"The second is illegal!"<<endl;
        Second = 0;
    }
}//end function get second
//function to retrieve hour
int Time::getHour()
{
    return Hour;
}//end function to retrieve hour
//function to retrieve minite
int Time::getMinite()
{
    return Minite;
}//end function to retrieve minite
//function to retrieve second
int Time::getSecond()
{
    return Second;
}//end function retrieve second
//function to retrieve total second
int Time::totalSecond()
{
    return Hour*60*60+Minite*60+Second;
}//end function to retrieve total second
//function to increase time
void Time::timeTick()
{
    Second++;
    if(Second>59)
    {
        Second = 0;
        Minite++;
    }
    if(Minite>59)
    {
        Minite =0;
        Hour++;
    }
    if(Hour>23)
    {
        Hour=0;
    }
}//end function tick







