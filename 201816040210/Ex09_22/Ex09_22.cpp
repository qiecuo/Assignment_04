#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
    Time t1(0,0,0);//construct t1
    Time t2( 12,45,36 );//construct t2

    cout<<"t1:";
    t1.printStandard();
    t1.printUniversal();
    cout<<"\n";
    cout<<"t2:";
    t2.printStandard();
    t2.printUniversal();
    cout<<"\n";

    t1.setTime( 23,59,59 );
    cout<<"t1:";
    t1.printStandard();
    t1.printUniversal();
    cout<<"\n";
    t2.tick();
    cout<<"t2:";
    t2.printStandard();
    t2.printUniversal();
    cout<<"\n";

    t1.tick();
    t1.printStandard();
    t1.printUniversal();

}
