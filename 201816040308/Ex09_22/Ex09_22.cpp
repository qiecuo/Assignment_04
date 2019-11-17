#include <iostream>
#include <ctime>
using namespace std;

#include "Time.h"

int main()
{
    time_t t;
    time(&t);
    Time a(t);
    a.tick();
}

