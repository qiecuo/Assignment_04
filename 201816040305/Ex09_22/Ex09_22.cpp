#include <iostream>
#include <math.h>
#include <time.h>
#include <string.h>
using namespace std;
#include "Time.h"
int main()
{
    Time ctime ;
    //display messages and cycle
    for(int i = 0 ; i < 5 ; i++)
        {
            ctime.tick() ;
            ctime.display() ;
        }
    ctime.setSecond() ;
    cout<< "total second is:"<<ctime.setSecond()<<endl ;
    return 0;
}
