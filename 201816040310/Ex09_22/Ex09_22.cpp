
#include <iostream>
#include <ctime>
#include "Time.h"
using namespace std;

int main()
{
    time_t curtime;
    curtime=0;
    cout<<curtime<<endl;
    time(&curtime); // use ctime lib to get current time
    cout<<curtime<<endl;

    Time myTime(curtime); // use current time to initialize myTime

    myTime.printUniversal(); // display myTime use two styles
    myTime.printStandard();
    cout << endl
         << endl;

    myTime.setHour(3); // set time
    myTime.setMinute(59);
    myTime.setSecond(57);

    for (int i = 0; i < 10; i++) // add time and check it stability
    {
        myTime.printUniversal();
        myTime.printStandard();
        myTime.tick();
    }
}