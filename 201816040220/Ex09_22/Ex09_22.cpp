#include <iostream>
#include <stdexcept>
#include <ctime>
#include "Time.h"

using namespace std;

int main()
{
	 time_t now;              //使用时间戳
     time(&now);
     cout<<now<<endl;

    Time t1(now);            //创建t1对象
    int i;

    for(i=1;i<=5;i++)        //时间增加5次
    {
        t1.printStandard();       //打印时间
        cout<<endl;

        t1.tick();             //时间增加函数
    }
}
