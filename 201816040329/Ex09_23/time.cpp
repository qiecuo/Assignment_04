#include <iostream>
#include<iomanip>
#include<stdexcept>
#include"time.h"
using namespace std;
using std::setfill;
using std::setw;

 Time::Time(int H,int M,int S)
 {
     setHour(H);
     setMinute(M);
     setSecond(S);
 }
 Time::~Time()

 {
     cout<<"^^^^~^^^^^^";
 }
void Time::setSecond(int S)
{
    if(S<=59&&S>=0)
        second=S;
    else
        throw invalid_argument("second shou with 0-59");
}
void Time::setHour(int H)
{
    if(H>=0&&H<=23)
         hour=H;
       else
        throw invalid_argument("hour should within 0-23");
}
void Time::setMinute(int M)
{
    if(M>=0&&M<=59)

        minute=M;
     else
        throw invalid_argument("minute shoould be 0-59");

}

void Time::tick()
{
    if(second<=58&&second>=0)
        ++second;
    else if(minute<=58&&minute>=0)
    {
     ++minute;
     second=0;
    }
    else if(hour<=23&&hour>=0)
    {
        ++hour;
        second=0;
        minute=0;
    }
    else
    {
        second=0;
        minute=0;
        hour=0;
    }
}
void Time::printStandard()
{
    cout<<setfill('0')<<setw(2)<<((hour%12==0&&hour>=12)?12:hour%12)<<":"<<((hour>=12)?"pm":"am")<<endl;

    }
   void Time::printUniversal()
    {
        cout<<setfill('0')<<setw(2)<<((hour=0&&hou=12)?12:hour%12)<<":"<<setfill('0')<<setw(2)<<minute<<":"<<setw(2)<<second<<((hour<12)?"am":"pm");

    }
