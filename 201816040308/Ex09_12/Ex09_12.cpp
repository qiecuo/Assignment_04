#include <iostream>

using namespace std;

#include "Rectangle.h"

int main()
{
   Rectangle a(0.0,0.0,0.0,4.0,8.0,0.0,8.0,4.0);
   cout<<a.judgeRectangle()<<' '<<a.judgesquare()<<' '<<a.getlength()<<' '<<a.getwidth()<<' '<<a.getperimeter()<<' '<<a.getarea();
}
