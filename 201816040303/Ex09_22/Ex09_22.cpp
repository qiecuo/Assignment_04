#include<ctime>
#include<iostream>
#include <Windows.h>
#include"Time.h"
using namespace std;

int main()
{

    Time time;
    while(1) {
        time.pt();
        time.tick();
        Sleep(1 * 1000);
    }
    return 0;
}
