//
//  Ex09_11.cpp
//  Ex09_11
//
//  Created by misonomayubw on 2019/11/17.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include "main.h"
#include <iostream>

using namespace std;

int main()
{
    Rectangle R(1,1); //inilization
    float length,width;
    float Perimeter, Area;
    cout << "please input the length:  " <<endl;
    //input length
    length = R.getlength(<#float#>);
    cout << "please input the width:  " <<endl;
    //input width
    width = R.getwidth(<#float#>);
    Perimeter = R.Perimeter;
    Area = R.Area;
    
    //output perimrter and area
    cout << "the perimeter is: " << Perimeter << endl;
    cout << "the area is: " << Perimeter << endl;
    
    return 0;
}
