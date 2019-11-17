#include <iostream>
#include"Time.h"
using namespace std;
int main()
{
Time time(23,56,12);//定义一个时间
Time *p;
p=&time;
p->printStandard();
p->printUniversal();
p->setHour(6);	//修改数据
p->setMinute(15);
p->setSecond(20);
p->printStandard();
p->printUniversal();
system("pause");
return 0;
}
