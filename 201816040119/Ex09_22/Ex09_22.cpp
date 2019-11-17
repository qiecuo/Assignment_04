#include <iostream>

using namespace std;
#include"Time.h"
int main()
{
    char d;
    Time a(d);
    Time b(23,59,59);
    cout<<"localtime is:";
    b.printStandard();
    cout<<"the time is:";
    b.printStandard();
    b.tick();
    cout<<"after tick:";
    b.printStandard();
    return 0;
}
