#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

#include<string.h>
#include<ctime>
using namespace std;
class Time
{
    time_t t;
    struct tm *p;
    int year;
    int month;
    int day;
    int h;
    int m;
    int s;
    int tt;
public:
    Time();
    string pt();
    Time & tick();
};


#endif // TIME_H_INCLUDED
