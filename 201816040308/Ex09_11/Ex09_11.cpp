#include <iostream>
using namespace std;

#include "Rectangle.h"

int main()
{
   Rectangle a;
   cout<<a.getlength()<<' '<<a.getwidth()<<' '<<a.calcperimeter()<<' '<<a.calcarea()<<' '<<a.judge();
}
