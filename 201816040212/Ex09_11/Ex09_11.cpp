//
//  main.cpp
//  ass4-11
//
//  Created by MacBook on 2019/11/4.
//  Copyright © 2019 MacBook. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Rectangle.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
//    point p1,p2,p3,p4;
//    p1.x=2;p1.y=2;
//    p2.x=17;p2.y=2;
//    p3.x=17;p3.y=17;
//    p4.x=2;p4.y=17;
    
    Rectangle r1;
    Rectangle r2(12,14);
//    Rectangle r3(p1,p2,p3,p4);
    
    std::cout << "r1: area:"<<r1.getArea()<<" perimeter:"<<r1.getPerimeter()<<" is Square? "<<r1.isSquare()<<endl;
    std::cout << "r1: area:"<<r2.getArea()<<" perimeter:"<<r2.getPerimeter()<<" is Square? "<<r2.isSquare()<<endl;
//    std::cout << "r1: area:"<<r3.getArea()<<" perimeter:"<<r3.getPerimeter()<<" is Square? "<<r3.isSquare()<<endl;
    return 0;
}
