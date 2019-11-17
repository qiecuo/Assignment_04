#include <iostream>
#include<ctime>

#include "Time.h"
using namespace std;

int main()
{
	Time t1(10,10,59),t2(10,59,59),t3(23,59,59);

	cout<<" The initial value of t1 is \n";
	t1.Tick();
	cout<<"The value of t1 after one tick is \n";
	t1.printStandard();

	cout<<"The initial value of t2 is \n";
	t2.Tick();
	cout<<"The value of t2 after one tick is \n";
	t2.printStandard();

	cout<<"The initial value of t3 is \n";
	t3.Tick();
	cout<<"The value of t3 after one tick is \n";
	t3.printStandard();

	struct tm* local;
	time_t t;
	t=time(NULL);
	local=localtime(&t);
	cout<<"local time is: \n";
	cout<<local->tm_hour<<":"<<local->tm_min<<":"<<local->tm_sec;
	cout<<"totalSeconds: "<<(hour*3600)+(getminute()*60)+getsecond;
	return 0;

}
