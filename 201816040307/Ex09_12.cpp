#include<iostream>
#include<iomanip>
#include"Point.h"
using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);
    //create a object named rplus
    Point rplus(2,3,4,1,7,4,5,6);
    cout<<endl;
    //show some of the info of the rectangle rplus
    rplus.calc_feature(2,3,4,1,7,4);
    //weather it's a square
    cout<<"Weather it's a square."<<endl;
    rplus.weather_square(2,3,4,1,7,4);
    cout<<endl;
    //create a square
    Point rplus_square(1,1,1,4,4,1,4,4);
    //show the info of rplus_square
    rplus_square.calc_feature(1,1,1,4,4,1);
    cout<<endl;
    //judge square
    cout<<"Weather it's a square."<<endl;
    rplus_square.weather_square(1,1,1,4,4,1);
}
