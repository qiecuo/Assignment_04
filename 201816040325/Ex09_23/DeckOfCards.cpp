#include "DeckOfCards.h"
#include "Card.h"
#include<vector>
#include<ctime>
#include<iostream>

using namespace std;

DeckOfCards::DeckOfCards()
{
    setCurrentcards(Card::cardFace*Card::cardSuit);//初始化待处理的牌数

    for(int i=0;i<Card::cardFace*Card::cardSuit;i++)
    {
        Card card(i%Card::cardFace,i/Card::cardFace);
        deck.push_back(card);
    }
}

void DeckOfCards::setCurrentcards(int n)
{
    currentCards=n;
}

int DeckOfCards::getCurrentcards()
{
    return currentCards;
}

void DeckOfCards::shuffle()
{
    for (int i=deck.size()-1;i>=0;--i)
	{
		srand((unsigned)time(NULL));
		swap(deck[rand()%(i+1)],deck[i]);
	}
}

void DeckOfCards::dealCard(int cardsamount)//cardsamout表示待输出牌的数量
{
    for(int i=0;i<cardsamount;i++)
    {
        cout<<deck[i].toString();
        cout<<endl;
    }
}

bool DeckOfCards::moreCards(int n)
{
     if(n<currentCards)
     {
         return true;
     }
     else
     {
         return false;
     }
}
