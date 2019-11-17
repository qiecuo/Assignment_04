#include <iostream>
#include "DeckOfCards.h"
#include "Card.h"

using namespace std;

DeckOfCards::DeckOfCards()
{
    currentCard=1;
    for(int i=1;i<14;i++)
    {
        for(int j=1;j<5;j++)
        {
            Card a(i,j);
            deck.push_back(a);
        }
    }
}

void DeckOfCards::shuffle()
{
    int j,k;
    for(int i=0;i<53;i++)
    {
        Card temp(0,0);
        j=rand()%53;
        k=rand()%53;
        temp=deck[j];
        deck[j]=deck[k];
        deck[k]=temp;
    }
}

void DeckOfCards::dealCard()
{
    cout<<deck[currentCard].toString()<<endl;
    currentCard+=1;
}

bool DeckOfCards::moreCards()
{
    if(currentCard==51)
    {
        return true;
    }
    else
        return false;
}
