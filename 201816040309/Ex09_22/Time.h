#include<time.h>
class Time
{
public:
    Time();
    time_t now_second;
    time_t time_1;
    struct tm * time_2;
    time_t tick();



};
