#include <iostream>
#include <stdexcept>
#include <ctime>
#include "Time.h"

using namespace std;

int main()
{
    Time t1;

    cout << "The universal time is " ;
    t1.printUniversal();
    cout << "\n\nThe standard time is " ;
    t1.printStandard();
    for(int i=0;i<=100;i++)
    {
         t1.tick();
    t1.printStandard();
    }

    return 0;
}
