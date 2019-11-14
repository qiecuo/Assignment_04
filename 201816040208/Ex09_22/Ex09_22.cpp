#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    Time a(11, 59, 59);

    cout << "Current time is ";
    a.printTime();
    a.tick();   //秒数加1

    cout << endl << "Current time is ";
    a.printTime();
}
