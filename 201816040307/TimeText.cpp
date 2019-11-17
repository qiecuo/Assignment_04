#include <iostream>
#include <ctime>
using namespace std;

#include "Time.h"

using namespace std;

int main()
{
    //get time
    time_t t;
    time(&t);

    //create the object of Time
    Time t1(t);
    t1.tick();

    //create the object include three arguments
    cout<<endl;
    Time t2(23, 45, 34);
    //show info of t2
    t2.printStandard();
    t2.printUniversal();

    return 0;
}
