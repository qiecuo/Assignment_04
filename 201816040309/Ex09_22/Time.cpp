#include <iostream>
#include <time.h>

#include "Time.h"

using namespace std;
Time::Time()
{
   time(&time_1);
   time_2 = localtime(&time_1);
   now_second = time_2->tm_hour*3600+time_2->tm_min*60+time_2->tm_sec;
}
time_t Time::tick()
{
    time_2->tm_sec = time_2->tm_sec+1;
    if(time_2->tm_sec==60)
    {
        time_2->tm_sec = 0;
        time_2->tm_min +=1;
        if(time_2->tm_min==60)
        {
            time_2->tm_hour +=1;
            time_2->tm_min=0;
            if(time_2->tm_hour==24)
            {
                time_2->tm_hour =0;
                time_2->tm_mday +=1;
            }
        }
    }
    now_second = time_2->tm_hour*3600+time_2->tm_min*60+time_2->tm_sec;

}
