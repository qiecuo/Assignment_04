//
//  Card.hpp
//  Ex09_23
//
//  Created by misonomayubw on 2019/11/17.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include<iostream>
#include<string>
#ifndef Card_hpp
#define Card_hpp

using namespace std;

class Card
{
public:

    Card(int = 0 ,int = 0);
    int getface();
    int getsuit();
    //牌的信息：数字+花色
    string toString();

private:
    //牌的数字大小和花色默认，不可被用户操作
    int face;
    int suit;
    
    static string face0[20];
    static string suit0[8];
    
};

#endif /* Card_hpp */
