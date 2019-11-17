#include <cstdlib>
#include <ctime>
#include <iostream>
#include "DeckOfCards.h"

DeckOfCards::DeckOfCards()               //将产生的牌添加到vector末尾
{
  int i;
  for(i=0;i<52;i++)
  {
      Card card(i%Card::totalFace,i/Card::totalFace);
      deck.push_back(card);
  }
}

void DeckOfCards::shuffle()             //洗牌
{
 srand(time(0));

 int a[52],i;

 for(i=0;i<52;i++)
     a[i]=int(rand())%52;

 for(i=0;i<52;i++)               //交换两张牌
 {
     Card b(0,0);
     b=deck[i];
     deck[i]=deck[a[i]];
     deck[a[i]]=b;
 }
}

Card DeckOfCards::dealCard()           //逐个输出牌
{
    int i;
    for(i=0;i<52;i++)
    {
        cout<<deck[i].toString()<<" ";
        if((i+1)%13==0)
            cout<<endl;
    }
}
