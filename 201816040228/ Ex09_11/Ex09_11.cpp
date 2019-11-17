#include <iostream>
#include <string>
using namespace std;

#include "Rectangle.h" // include definition of class Rctangle

// function main begins program execution
int main()
{

   float llength;
   float wwidth;

   cin >> llength >> wwidth;

   Rectangle rectangle;
   rectangle.setLength(llength);//获取长
   rectangle.setWidth(wwidth);//获取宽
   cout << rectangle.Perimeter() << endl;//输出周长
   cout << rectangle.Area() << endl;//输出面积

} // end main
