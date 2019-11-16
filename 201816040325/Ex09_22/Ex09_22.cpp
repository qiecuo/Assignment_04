#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    Time t1;

    t1.printStandard();//输出标准时间
    cout<<endl<<endl;
    t1.tick();
}
