//Ex09_12.cpp
#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main()
{
   Point q(2,6),w(7,6),e(2,2),r(7,2);//initialize the data
   Rectangle coo(q,w,e,r);

   cout<<"The Rectangle's length is :"<<coo.getLength()<<endl;
   cout<<endl;
   cout<<"The Rectangle's width is :"<<coo.getWidth()<<endl;
   cout<<endl;
   cout<<"The Rectangle's perimeter is :"<<coo.getPerimeter()<<endl;
   cout<<endl;
   cout<<"The Rectangle's area is :"<<coo.getArea()<<endl;
   cout<<endl;
   coo.square();
   return 0;
}
