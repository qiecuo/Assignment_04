#include <ctime>

class Time
{
private:
    time_t seconds;

public:
    Time(time_t a=0);//构造函数
    void setTime(int);//设置时间
    int gethour();//获取时
    int getmin();//获取分
    int getsecond();//获取秒
    void printTime();//打印时间
    void nextsecond();//下一秒
};
