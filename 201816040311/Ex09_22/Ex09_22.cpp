#include <iostream>
#include <ctime>
#include "Time.h"

using namespace std;

int main()
{
    time_t now = time(0);
    Time a(now);
    int b;
    //enter the added seconds
    cout <<"Please enter the added seconds:\n" <<endl;
    cin >> b;
    a.tick(b);
}
