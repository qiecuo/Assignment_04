//
//  main.cpp
//  Ex09_11
//
//  Created by misonomayubw on 2019/11/17.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle (float length, float width);
{
    setlength (length);
    setwidth (width);
}

float Rectangle::Perimeter()
{
    //计算周长
    return 2*length+2*width;
}

float Rectangle::Area()
{
    //计算面积
    return length*width;
}

void Rectangle::setlength(float inlength)
{
    // save input length data
    if (inlength > 0 && inlength < 20)
    {
        length = inlength;
    }
    else
        cout << "invalid input length" << endl;
}
float Rectangle::getlength()
{
    return length;
    // load input length data
}

void Rectangle::setwidth(float inwidth)
{
    //save input width data
    if (inwidth > 0 && inwidth < 20)
    {
        width = inwidth;
    }
    else
        cout << "invalid input width" << endl;
}

float Rectangle::getwidth()
{
    return width;
    //load input width data
}
