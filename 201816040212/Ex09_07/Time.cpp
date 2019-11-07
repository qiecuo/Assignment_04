//
//  Time.cpp
//  ass4
//
//  Created by MacBook on 2019/11/3.
//  Copyright © 2019 MacBook. All rights reserved.
//

#include "Time.hpp"
#include <iostream>
#include <time.h>
#include <iomanip>
Time::Time(){
    time_t rawtime;
    struct tm * timeinfo;
    
    time (&rawtime);
    timeinfo = localtime (&rawtime);
    
    allsec=0;
    
    setHour(timeinfo);
    minute=timeinfo->tm_min;
    second=timeinfo->tm_sec;
}
void Time::tick(){
    allsec++;
    if(second+1>=60)
        if(minute+1>=60)
            if(hour+1>=12)
                if(half.compare("AM")==0)
                {
                    half="PM";hour=0;second=0;minute=0;
                }else{
                    half="AM";hour=0;second=0;minute=0;
                }
            else{
                hour++;second=0;minute=0;
            }
        else{
            minute++;second=0;
        }
    else{
        second++;
    }
}
void Time::setHour(struct tm * timeinfo){
    if(timeinfo->tm_hour>12){
        half="PM";
        hour=timeinfo->tm_hour-12;
    }else{
        half="AM";
        hour=timeinfo->tm_hour;
    }
}
void Time::printtime(){
    cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<" "<<half<<" AllSec:"<<allsec<<endl;
}

