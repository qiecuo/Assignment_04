//Ex09_22.cpp
#include <iostream>
#include <iomanip>
using namespace std;

#include"Time.h"

int main()
{
    Time time1(23,59,59);//initialize data
    cout<<"The total second is "<<time1.totalSecond()<<endl;
    cout<<"Time Now is "<<setfill( '0' )<<setw(2)<<time1.getHour()<<":"<<setw(2)<<time1.getMinite()<<":"<<setw(2)<<time1.getSecond()<<endl;
    time1.timeTick();
    cout<<"Time Next is "<<setfill( '0' )<<setw(2)<<time1.getHour()<<":"<<setw(2)<<time1.getMinite()<<":"<<setw(2)<<time1.getSecond()<<endl;
    cout<<endl;
    for(int i=0;i<65;i++)
    {
        time1.timeTick();
        cout<<"Time Next is "<<setfill( '0' )<<setw(2)<<time1.getHour()<<":"<<setw(2)<<time1.getMinite()<<":"<<setw(2)<<time1.getSecond()<<endl;
    }
}
