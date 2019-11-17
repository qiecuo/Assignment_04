//
//  Card.cpp
//  Ex09_23
//
//  Created by misonomayubw on 2019/11/17.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include "Card.hpp"
#include<iostream>

#include<string>

using namespace std;

//构造函数
Card::Card(int fa,int su)
{
    face = fa;
    //数字
    
    suit = su;
    //花色
}
//number
const string Card::face0[facenumber]=
{"3","4","5","6","7","8","9","10","J","Q","K","A","2"};
//color
const string Card::suit0[suitnumber]={"heart","squre","blackheart","blossom"};

string Card::toString()
{
    //卡片信息
    string info = face0[face]+"of"+suit0[suit];
    return info;
}
int Card::getface()
{
    return face;
}
int Card::getsuit()
{
    return suit;
}
