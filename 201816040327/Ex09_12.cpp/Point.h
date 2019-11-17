//
//  main.h
//  Ex09_12
//
//  Created by misonomayubw on 2019/11/17.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#ifndef main_h
#define main_h

#include<iostream>

using namespace std;

class Point
{
public:
    Point (float, float);
    float Perimeter;
    float Area;
    void setlength (float);
    void setwidth (float);
    void getlength (float);
    void getwidth (float);
    
private:
    float length;
    float inlength;
    float width;
    float inwidth;
}

#endif /* main_h */

