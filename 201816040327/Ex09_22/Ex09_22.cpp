//
//  main.cpp
//  Ex09_22
//
//  Created by misonomayubw on 2019/11/17.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include<iostream>
#include<stdexcept>

//class Time,hpp
#include"Time.hpp"

using namespace std;

int main()
{
    Time t1;
    Time t2(01);
    Time t3(02,02);
    Time t4(03,03,03);

//output t1
    t1.printUniversal();
    //24
    cout<<"\n";
    t1.printStandard();
    //12
    cout<<"\n";
    cout<<"\n";
    
//output t2
    t2.printUniversal();
    //24
    cout<<"\n";
    t2.printStandard();
    //12
    cout<<"\n";
    cout<<"\n";
    
//output t3
    t3.printUniversal();
    //24
    cout<<"\n";
    t3.printStandard();
    //12
    cout<<"\n";
    cout<<"\n";

//output t4
    t4.printUniversal();
    //24
    cout<<"\n";
    t4.printStandard();
    //12
    cout<<"\n";
    return 0;

}
