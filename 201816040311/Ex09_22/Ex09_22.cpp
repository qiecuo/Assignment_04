#include <iostream>
#include <ctime>
#include "Time.h"

using namespace std;

int main()
{
    time_t now = time(0);
    Time a(now);
    int b;
    cout<<"--------------------------------\n"<<endl;
    cin >> b;

    cout << "UTC 日期和时间："<< now << endl;
    a.tick(b);
}

