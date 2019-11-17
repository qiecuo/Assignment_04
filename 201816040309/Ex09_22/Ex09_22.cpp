#include <iostream>

#include <time.h>

#include"Time.h"
using namespace std;

int main()
{
    Time a;
    cout<<asctime(a.time_2)<<endl;
    cout<<a.now_second<<endl;
    a.tick();
    cout<<a.now_second<<endl;
    cout<<asctime(a.time_2)<<endl;
    a.tick();
    cout<<a.now_second<<endl;
    cout<<asctime(a.time_2)<<endl;
    a.tick();
    cout<<a.now_second<<endl;
    cout<<asctime(a.time_2)<<endl;
    a.tick();
    cout<<a.now_second<<endl;
    cout<<asctime(a.time_2)<<endl;
    a.tick();
    cout<<a.now_second<<endl;
    cout<<asctime(a.time_2)<<endl;

}
