#include <iostream>
#include"Rectangle.h"
#include"point.h""
using std::cout;
using namespace std;

int main()
{

     point k1(2.0,2.0);
     point k2(2.0,5.0);
     point k3(6.0,6.0);
     point k4(6.0,2.0);
     point k5(6.0,5.0);
      Rectangle Rectangle[4];
    for(int i=0;i<=3;i++)
    {
        cout<<"rectangle"<<i+1<<"\n";
        switch(i)
        {
        case 0:
            Rectangle[i]=Rectangle(k1,k2,k3,k4)
        case 1:
            Rectangle[i]=Rectangle(k1,k2,k3,k5)
            break;
        }
        cout<<"length="<<Rectangle[i].length();
        cout<<"width="<<Rectangle[i].width();
        Rectangle[i].C();
        Rectangle[I].S();
        cout<<"THE RECTANGLE"<<(Rectangle[i].square()?"is":"not")
            }
            return 0;
}
