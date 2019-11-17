#include <iostream>
using namespace std;
#include "Rectangle.h"
int main()
{
   Rectangle r(1.0,1.0);
   double length,width;
   cout<<"please input length and width"<<endl;
   cin>>length>>width;
   r.setlength(length);
   r.setwidth(width);
   r.print();

} // end main
