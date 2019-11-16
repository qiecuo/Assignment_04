#include <iostream>
#include <ctime>
#include "Time.h"
#include <iomanip>
#include <stdexcept>
using namespace std;

int main()
{
    Time t;
    for ( int loop = 1; loop <= 86400; ++loop )
   {
      t.printStandard();
      t.tick();
   }
    return 0;
}
