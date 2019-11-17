#include <iostream>
using namespace std;
#include "Time.h"
#include <iomanip>
#include <windows.h>

int main()
{
    Time date1; //Create an object of the Time class
    int i;
    for (i=1;i<=100;i++)
    {
    Sleep(1000) ;
    time_t rawtime1;
    struct tm *timeinfo;
    date1.tick() ;  //Add a second
    rawtime1 = date1.getSecond();
    timeinfo=localtime(&rawtime1) ;
    cout<< "Standard time after seconds plus one :"<<setfill('0')<<setw(2)<<((timeinfo->tm_hour)>12?timeinfo->tm_hour-12:timeinfo->tm_hour)<<":"<<setw(2)
    <<timeinfo->tm_min<<":"<<setw(2)<<timeinfo->tm_sec <<" "<<((timeinfo->tm_hour)>12?"pm":"am")<<"\n"; //Output time in minute and second format
    cout<< "The total number of seconds after one : "<< timeinfo->tm_hour*3600+timeinfo->tm_min*60+timeinfo->tm_sec << endl;
    }//Total number of seconds output

	return 0;
}
