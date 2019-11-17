#include <iostream>
#include <string>
using namespace std;

#include "Rectangle.h" // include definition of class Invoice
#include "Point.h"

// function main begins program execution
int main()
{

   Point p1(10,10);
   Point p2(19,10);
   Point p3(10,18);
   Point p4(19,18);
   Rectangle a;//对象a
   Point m(p1, p2, p3, p4);


   cout << "长方形顶点坐标为：" << endl;
   p1.print();
   p2.print();
   p3.print();
   p4.print();
   cout << endl;
   cout << "长为：" << a.Length(p1, p2, p3)<< endl;
   cout << "宽为：" << a.Width(p1, p2, p3)<< endl;
   cout << "周长为：" << a.Perimeter(p1, p2, p3)<< endl;//周长
   cout << "面积为：" << a.Area(p1, p2, p3)<< endl;//面积
   a.Square(p1, p2, p3);

} // end main

