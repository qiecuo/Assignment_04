#include<ctime>
#include<iostream>
#include"Time.h"
using namespace std;

Time::Time()
{
    time(&t);
    p = localtime(&t);
    year = 1900+p->tm_year;
    month = 1+p->tm_mon;
    day = p->tm_mday;
    h = p->tm_hour;
    m = p->tm_min;
    s = p->tm_sec;
    //h = 23;
    //m = 59;
    //s = 30;
    tt = (h*60*60+m*60+s)%86400;
}

string Time::pt()
{
    //cout << year <<"\\" << month <<"\\" << day <<endl;
    cout << h <<":" << m <<":" << s << "   \t"<< tt<<endl;
}

Time& Time::tick()
{
    if(s<59){
        ++s;
    } else if(m<59){
        ++m;
        s = 0;
    } else if(h < 23) {
        ++h;
        m = 0;
        s = 0;
    } else {
        h = 0;
        m = 0;
        s = 0;
    }
    ++tt;
    return *this;
}
