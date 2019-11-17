#include <iostream>
#include<iomanip>
#include"Rectangle.h"
using namespace std;
using std::fixed;
using std::setprecision;
int main()
{
    Rectangle n,k(5.0,2.0);
    cout<<setprecision(1);
    cout<<fixed;
    cout<<"k:length="<<k.getLength()<<"width:"<<k.getWidth()<<"S:="<<k.S()<<":C="<<k.C()<<"\n";
     cout<<"n:length="<<n.getLength()<<"width:"<<n.getWidth()<<"S:="<<n.S()<<":C="<<n.C()<<"\n";
    return 0;
}
