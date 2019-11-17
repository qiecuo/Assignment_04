#include <iostream>
#include"Time.h"
using namespace std;

int main()
{
    Time t1(0,0,0);
    cout<<"设定的一个测试时间："<<endl;
    t1.setTime(11,59,59);//Initialization time
    t1.printStandard();
    cout<<endl;
    t1.printUniversal();
    cout<<endl;
    t1.timetick();//add one second time
    cout<<"经过1秒后的时间："<<endl;
    t1.printStandard();
    cout<<endl;
    t1.printUniversal();
    cout<<endl<<endl;
    cout<<"获取到的此时的时间:"<<endl;
    t1.timechange();//time function get the time
    t1.printTime();
    cout<<endl<<endl;
    cout<<"从新的一天开始经过1000s以后的时间:"<<endl;
    t1.Night_time(1000);//night time
    t1.printStandard();//print Standard time
    cout<<endl;
    t1.printUniversal();//print universal time
    cout<<endl<<endl;
    return 0;
}
