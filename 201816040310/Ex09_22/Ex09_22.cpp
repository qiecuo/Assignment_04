
#include <iostream>
#include <ctime>
#include "Time.h"
using namespace std;

int main()
{
    time_t curtime;
    time(&curtime);
    Time myTime(curtime);
	myTime.printUniversal();
    myTime.printStandard();
	cout<<endl<<endl;
	myTime.setTime(0,5,54);
	myTime.setHour(4);
	myTime.setMinute(56);
	myTime.setSecond(0);
    for (int i = 0; i < 10; i++)
    {
        myTime.printUniversal();
        myTime.printStandard();
		myTime.tick();
    }
}