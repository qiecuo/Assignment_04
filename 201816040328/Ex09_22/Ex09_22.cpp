#include <iostream>
#include<stdexcept>
#include"Time.h"
using namespace std;

int main()
{
    Time m(23,59,59);//all arguments specified
    Time n(12,34);//hour and minute specified ,second defaulted
    Time p(12);//only hour specified
    Time q;//all arguments defaulted
    cout<<"Time m:"<<endl;
    m.printUniversal();
    m.printStandard();//print Time m by universal and standard
    cout<<endl<<endl;
    cout<<"Time n"<<endl;
    n.printUniversal();
    n.printStandard();//print Time n by universal and standard
    cout<<endl<<endl;
    cout<<"Time p"<<endl;
    p.printUniversal();
    p.printStandard();//print Time p by universal and standard
    cout<<endl<<endl;
    cout<<"Time q"<<endl;
    q.printUniversal();
    q.printStandard();
    cout<<endl<<endl;//print Time q by universal and standard
    q.settimebytime();//change the time of q by using set time by time
    cout<<"The time of q after using “settimebytime” is:"<<endl;
    q.printUniversal();
    q.printStandard();//print Time m by universal and standard
    cout<<endl<<endl;
    m.tick();//increase m's time by 1 second with a function
    cout<<"The time of m after increase its time by 1 second with a  function"<<endl;
    m.printUniversal();
    m.printStandard();//print Time m by universal and standard
    return 0;
}
