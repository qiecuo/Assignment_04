#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "Time.h"

using namespace std;

int main()
{
    Time t1;
    Time t2(2);
    Time t3(21,34);
    Time t4(12,25,42);

    cout<<"Constructed with :\n\nt1:all arguments defaulted\n   ";
    t1.printUniversal();
    t1.tick();
    cout<<endl;
    t1.printStandard();
    t1.tick();


    cout<<endl<<endl;
    t2.printUniversal();
    t2.tick();
    cout<<endl;
    t2.printStandard();
    t2.tick();


    cout<<endl<<endl;
    t3.printUniversal();
    t3.tick();
    cout<<endl;
    t3.printStandard();
    t3.tick();


    cout<<endl<<endl;
    t4.printUniversal();
    t4.tick();
    cout<<endl;
    t4.printStandard();
    t4.tick();

    try
    {
        Time t5(27,74,99);
        t5.tick();
    }
    catch(invalid_argument &e)
    {
        cerr<<"\n\nException while initializing t5:"<<e.what()<<endl;
    }

}
