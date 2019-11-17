//
//  DeckOfCard.cpp
//  Ex09_23
//
//  Created by misonomayubw on 2019/11/17.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include "DeckOfCard.hpp"

//browsing a website
#include"Card.h"
#include<iostream>
#include<vector>

using namespace std;

//构造函数
DeckOfCards::DeckOfCards()
{

    for (int i = 1;i <= 52;i++)
    {
        Card card(i%13,i/13);
        deck.push_back(card);
    }

}

//洗牌
void DeckOfCards::shuffle()//function to shuffle the cards
{
    srand(time(0));
    for(int i=0;i<52;i++)
    {
        Card Card;
        int a=rand()%52;

        
    }
}

//发牌

