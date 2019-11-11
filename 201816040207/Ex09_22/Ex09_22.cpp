#include <iostream>
#include"Time.h"
using namespace std;

int main()
{
    Time t1;
    t1.setTime(11,59,59);//输入时间
    t1.printStandard();
    cout<<endl;
    t1.printUniversal();
    cout<<endl;
    t1.timetick();//时间加一秒
    t1.printStandard();
    cout<<endl;
    t1.printUniversal();
    cout<<endl<<endl;
    t1.timechange();//time函数获取的时间
    t1.printTime();
    cout<<endl<<endl;
    t1.timein(28923);//自午夜以来计时
    t1.printStandard();//打印时间
    cout<<endl;
    t1.printUniversal();//打印时间
    cout<<endl<<endl;
    return 0;
}
