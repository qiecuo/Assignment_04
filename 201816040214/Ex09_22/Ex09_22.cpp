#include <iostream>
#include <stdexcept>
#include <ctime>
#include "Time.h"
using namespace std;


int main()
{
    time_t timer = time(0);
    // localtime: time_t -> struct
    struct tm *t = localtime(&timer);//call ctime's function
    int seconds = t->tm_hour*3600 + t->tm_min*60 + t->tm_sec;//sum all seconds today
    cout << "today all seconds are: " << seconds << "\n\n";
    Time t0(seconds);
    //output seconds
    cout << "Now standard time is:";
    t0.printStandard();
    cout << "\nNow universal time is:";
    t0.printUniversal();

    //This is the code of Ex09_07
    /*int i = 0;
	Time date1(11,59,59);//initialize the date
	date1.printStandard();
	while (i < 3)
	{
		date1.tick();//add 1s to the date
		date1.printStandard();//output date
		i++;
	}*/
}
