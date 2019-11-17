#include<iostream>
#include<stdexcept>
#include"Time.h"//class Time
using namespace std;
int main()
{
    Time t1;//all arguments
    Time t2(2);//hour
    Time t3(21,34);//hour and minute
    Time t4(12,25,42);//hour and minute and second
    cout<<"all arguments defaulted: \n";
    t1.printUniversal();//print 00:00:00
    cout<<"\n";
    t1.printStandard();//print 12:00:00 AM

    cout<<"hour specified is: \n";
    t2.printUniversal();//02:00:00
    cout<<"\n";
    t2.printStandard();//2:00:00 AM

    cout<<"hour and second specified is: \n";
    t3.printUniversal();//21:24:00
    cout<<"\n";
    t3.printStandard();//9:34:00 PM

    cout<<"hour and minute and second specified is: \n";
    t4.printUniversal();//12:25:42
    cout<<"\n";
    t4.printStandard();//12:25:42 PM
    return 0;

}
