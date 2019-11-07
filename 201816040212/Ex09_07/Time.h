//
//  Time.hpp
//  ass4
//
//  Created by MacBook on 2019/11/3.
//  Copyright © 2019 MacBook. All rights reserved.
//

#ifndef Time_hpp
#define Time_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
class Time{
public:
    Time();
    void tick();
    void setHour(struct tm * );
    void printtime();
private:
    int hour;
    int minute;
    int second;
    int allsec;
    string half;
};
#endif /* Time_hpp */
