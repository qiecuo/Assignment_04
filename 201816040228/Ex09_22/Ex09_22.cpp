#include <iostream>

#include <string>
#include <stdexcept>
using namespace std;

#include "Time.h" // include definition of class


// function main begins program execution

int main(int argc,char*argv[])
{


    Time t;//对象t
    cout << "now time: "<< t.Year << "/" << t.Month << "/" << t.Day << "  " <<  t.Hour << ":"<< t.Minute << ":" << t.Second << endl;//输出当前时间
    cout << endl;
    cout << "TotalSecond is : ";
    t.setTime();//用秒表示
    int i=0;
    cout << "Univesal time: ";
    t.printUniversal();
    while(i<30)//30秒内的递增
    {
        t.tick();
        t.printStandard();
        i++;
    }
    cout << "NowTotalSecond is : ";//递增后的时间
    t.setTime();

   return 0;

} // end main
