#include <iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;

int main()
{
   Time t();//construct a object
   cout << t.getHour() << t.getMinute() << t.getsecond() <<endl;
   cout << t.printsecond() << endl;
}
