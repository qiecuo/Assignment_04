#include <string>
#include<cstdlib>
#include<ctime>
#include <iostream>

using namespace std;
#include"deckofcards.h"

DeckOfCards::DeckOfCards( )//构造函数
{
    currentCard=0;//初始值0
    for(int i=0;i<52;i++)
    {
        Card card(i%13,i/13);
        deck.push_back(card);//将牌添加到vector末尾
    }
      srand((unsigned)time(0));
}

void DeckOfCards::shuffle()//洗牌
{

    int a[52];
    for(int i=0;i<52;i++)
    {
          a[i]=int(rand())%52;
    }

    for(int i=0;i<52;i++)
    {
        Card b(0,0);
        b=deck[i];
        deck[i]=deck[a[i]];
        deck[a[i]]=b;
    }
}

Card DeckOfCards::dealCard(int h)//发牌
{
    for(int i=1;i<=h;i++)
    {
        cout <<deck[i].toString() <<endl;
        if((i)%13==0)
            cout <<endl;
        currentCard++;
    }
    return deck[currentCard++];//牌数加一
}



 bool DeckOfCards::moreCard()//判断是否有多的牌
{
    if (currentCard<=52)
    {
        return true;
    }
    else
        return false;

    return false;
}
