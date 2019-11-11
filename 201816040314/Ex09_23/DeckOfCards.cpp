
#include "DeckOfCards.h"
#include <time.h>

DeckOfCards::DeckOfCards()//default constructor
{
    number=0;
    for(int i=1;i<14;i++)
        for(int j=1;j<5;j++)
        {
         deck.push_back(Card(i,j));
        }
}
void DeckOfCards::shuffle()//shuffle function
{
    srand((unsigned)time(NULL));
    int num=rand()%51;
    for(int i=0;i<52;i++)
    {
        num=rand()%51;
        if(num!=i&&num<52&&num>=0)
        {
            deck[52]=deck[i];
            deck[i]=deck[num];
            deck[num]=deck[52];
        }
        else
            i--;

    }

}
Card & DeckOfCards::dealCard()//a function to return the next card
{

    if(number<52)
    {
        currentCard=deck[number].getFace();
        currentCardSuit=deck[number].getFace();
        number++;
        return deck[number-1];
    }

}
bool DeckOfCards::moreCards()//a function to judge whether there have cards
{
    if(number<52)
        return true;
    else
        return false;
}

