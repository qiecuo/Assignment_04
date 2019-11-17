#include <iostream>
#include <ctime>
#include"Time.h"
using namespace std;
int main()
{
    time_t now;
    Time t1(now);
    t1.printStandard();

    time(&now);
    Time t2(now);
    cout<<now<<endl;
    t2.printStandard();

    Time t(23,59,59);
    t.printStandard();
    for(int i=1;i<=5;i++){
        t.tick();
        t.printStandard();
    } 
     
    return 0;
}
