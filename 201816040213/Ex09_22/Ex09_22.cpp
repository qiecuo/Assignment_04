#include <iostream>
#include <ctime>
#include "Time.h"  //include definition of class Time from Time.h

using namespace std;

int main()
{
    Time t; //create a Time object,and get now time

    t.printUniversal(); //print universal time
    cout<<endl;
    t.printStandard(); //print standard time
    cout<<endl<<endl;
    t.setHour(23).setMinute(59).setSecond(59); //input a tima
    t.printUniversal(); //print universal time
    cout<<endl;
    t.printStandard(); //print standard time

    t.tick(); //total seconds plus one

    cout<<endl<<endl;
    t.printUniversal(); //print universal time
    cout<<endl;
    t.printStandard(); //print standard time
    return 0;
}
