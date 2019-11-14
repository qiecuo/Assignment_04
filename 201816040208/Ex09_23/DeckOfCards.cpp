#include"deckofcards.h"
#include<cstdlib>
#include<ctime>
#include<iostream>

DeckOfCards::DeckOfCards()
{
    int i;

    for(i = 0; i < 52; i++) //初始52次
    {
        Card a(i%13, i/13);
        deck.push_back(a);
    }
}

void DeckOfCards::shuffle()
{
    srand(time(0));
    int i;

    for(i = 0; i < 52; ++i)
    {
        int temp = int(rand())%52;  //每次取随机值交换两张牌
        Card a(0, 0);
        a = deck[i];
        deck[i] = deck[temp];
        deck[temp] = a;
    }
}

Card DeckOfCards::dealCard(int m)
{
    return deck[m+1];
}

bool DeckOfCards::moreCards()
{
    int i;

    for(i = 0; i < 51; i++)
    {
        if(deck[i].getFace() == this->dealCard(i).getFace())    //如果前后两张牌点数相同代表没有仍需要去洗
            return true;
        else
            return false;
    }
}
