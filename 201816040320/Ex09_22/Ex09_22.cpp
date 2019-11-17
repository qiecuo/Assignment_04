#include <iostream>
#include <ctime>
#include "Time.h"
using namespace std;

int main()
{
    time_t a;
    time(&a);//获取当前时间
    a+=3600*8;//加8小时
    a=a%86400;//获取当天秒数
    Time sj(a);
    sj.printTime();
    for(int i=0;i<3600;++i)
    {
        sj.nextsecond();
        sj.printTime();
    }
    //进入下一小时
    int z,r,y;
    cout <<"时：";
    cin >> z;
    cout << "分：";
    cin >> r;
    cout <<"秒：";
    cin >> y;
    int x=y+r*60+z*3600;
    sj.setTime(x);
    sj.printTime();
    //自定义时间
}
