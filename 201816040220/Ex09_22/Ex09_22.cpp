#include <iostream>
#include <stdexcept>
#include <ctime>
#include "Time.h"

using namespace std;

int main()
{
     time_t now;              //使用时间戳  localtime->tm_hour min sec
     time(&now);

    time_t currentTime=time(0);          //使用当地时间
    tm *localTime = localtime(&currentTime);
    
    Time t2(localTime->tm_hour,localTime->tm_min,localTime->tm_sec);  //创建t2对象 
    
    Time t1(now);            //创建t1对象
    int i;

    for(i=1;i<=5;i++)        //时间增加5次
    {
        cout<<"use second: ";
        t1.printStandard();       //打印时间
        cout<<"   ";
        cout<<"use time: ";
        t2.printStandard();       //打印时间
        cout<<endl;

        t1.tick();             //时间增加函数
        t2.tick();
    }
}
