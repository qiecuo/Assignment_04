//
//  main.h
//  Ex09_11
//
//  Created by misonomayubw on 2019/11/17.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#ifndef main_h
#define main_h

#include<iostream>

using namespace std;

class Rectangle //Rectangle类
{
public:
    Rectangle (float, float); //构造函数
    float Perimeter; //周长
    float Area; //面积
    void setlength (float); //用户输入长度
    void setwidth (float); //用户输入宽度
    void getlength (float);
    void getwidth (float);
    
private:
    float length;
    float inlength;
    float width;
    float inwidth;
}

#endif /* main_h */
