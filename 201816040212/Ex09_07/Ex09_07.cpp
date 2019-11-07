//
//  main.cpp
//  ass4
//
//  Created by MacBook on 2019/11/3.
//  Copyright © 2019 MacBook. All rights reserved.
//

#include <iostream>
#include "Time.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    Time t1;
    while (1) {
        t1.printtime();
        t1.tick();
    }
    t1.printtime();
    return 0;
}
