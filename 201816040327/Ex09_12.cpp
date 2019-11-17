//
//  main.cpp
//  Ex09_12
//
//  Created by misonomayubw on 2019/11/17.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include <iostream>
#include"Rectangle.h"
using namespace std;

int main() {
    // insert code here...
    
    Rectangle R(1,1);
    float perimeter,area,width,length;
    
    length = R.getlength();
    cout<<"this length is :"<<length<<endl;
    width = R.getwidth();
    cout<<"this width is :"<<width<<endl;
    perimeter=R.perimeter();
    cout<<"this perimeter is :"<<perimeter<<endl;
    area = R.area();
    cout<<"this area is :"<<area<<endl;
    
    return 0;
}
