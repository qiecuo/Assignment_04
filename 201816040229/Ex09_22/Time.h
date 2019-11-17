#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED



#endif // TIME_H_INCLUDED

#include <iostream>
using namespace std;



class Time
{
    public:

        Time();
        void setTime( int, int, int );
        void setHour( int );
        void setMinute( int);
        void setSecond( int );
        int getHour() ;
        int getMinute() ;
        int getSecond();
        int printUniversal();

    private:
        int hour;
        int minute;
        int second;
};
