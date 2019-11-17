#include<time.h>
#include<iostream>
#include <stdexcept>
#include <iomanip>
#include "Time.h"
using namespace std;
int main()
{
  Time time;//create an object
  time.setTime(82799);//to set the second of the object
  time.printStandard();//print the standard of the time
  time.tick();//to increase the second
  time.printStandard();//print the standard of the time
  cout<<endl;

  time.setTime(86339);//to set the second of the object
  time.printStandard();//print the standard of the time
  time.tick();//to increase the second
  time.printStandard();;//print the standard of the time
   cout<<endl;

  time.setTime(86399);//to set the second of the object
  time.printStandard();//print the standard of the time
  time.tick();//to increase the second
  time.printStandard();//print the standard of the time
   cout<<endl;
  return 0;

}
