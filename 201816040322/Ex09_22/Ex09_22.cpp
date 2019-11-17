//Assignment_04:Ex09_22.cpp
//Constructor with default argument
#include <iostream>
#include <stdexcept>
#include <ctime>
#include "Time.h" //include definition of class Time from Time.h
using namespace std;

int main()
{
    const int N=50; // const N convenient to modify
    Time t1; //all argument defaulted
    Time t2(2);
    Time t3(21,34);
    Time t4(12,25,42);

    cout << "Constructed with:\n\nt1: all arguments defaulted\n ";
    t1.printUniversal();
    cout << "\n ";
    t1.printStandard();

    cout << "\n\nt2: hour specified; minute and second defaulted\n ";
    t2.printUniversal();
    cout << "\n ";
    t2.printStandard();

    cout << "\n\nt2: hour and minute specified; second defaulted\n ";
    t3.printUniversal();
    cout << "\n ";
    t3.printStandard();

    cout << "\n\nt2: hour, minute and second specified\n ";
    t4.printUniversal();
    cout << "\n ";
    t4.printStandard();

    //attempt to initialize t5 with invalid values
    try
    {
        Time t5(27,74,99); // all bad values specified
    } // end try
    catch(invalid_argument &e)
    {
        cerr << "\n\nException while initializing t5: " << e.what() << endl;
    } // end catch

    for(int i=0;i<N;++i) //test tick function
    {
        t3.tick();
        cout << "\n";
        t3.printUniversal();
        cout << "\n";
        t3.printStandard();
    }

    return 0;
} // end main
