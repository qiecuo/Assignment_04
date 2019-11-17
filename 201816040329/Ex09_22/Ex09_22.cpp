#include <iostream>
#include"time.h""

using namespace std;

int main()
{

    Time tim;
    tim.setHour(23);
    tim.setMinute(59);
    tim.setSecond(59);
    int i=0;
    while(i<20)
    {
        tim.tick();
        tim.printStandard();
        cout<<endl;
        i++;
    }

    return 0;
}
