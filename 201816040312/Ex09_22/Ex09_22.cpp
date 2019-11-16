#include<iostream>
#include<stdexcept>
#include"Time.h"
#include<ctime>//ime的标准库

using namespace std;
int main()
{
    time_t now;
    time(&now);
    Time time1(now);
    time1.printstandard();//输出12小时制的时间
    cout<<"\n";
    time1.printuniversal();//输出24小时制的时间
    while(time1.getsecond()<59)//将秒输出到58
    {
        cout<<"\n"<<time1.getsecond()<<endl;//输出秒
        time1.tick();//将秒+1
    }
    cout<<"\n"<<time1.getsecond();//将秒输出到59
}
