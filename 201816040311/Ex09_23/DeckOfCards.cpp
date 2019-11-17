#include <iostream>
#include "DeckOfCards.h"
#include <vector>
#include <algorithm>
#include<stdio.h>
#include<stdlib.h>
#define Random(x) (rand() % x)//Randomly generated x
using  namespace std;

//default constructor of the DeckOfCards
DeckOfCards::DeckOfCards()
{
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<14;j++)
        {
            Card b(j,i);
            deck.push_back(b);
        }
    }
}

//Random shuffle
void DeckOfCards::shuffle()
{
    int b=52;
    for(int i=0;i<b;i++)
    {
        Card  temp=deck[i];
        int j=Random(b);
        deck[i]=deck[j];
        deck[j]=temp;
    }
}
//Check if there is still work
bool DeckOfCards::moreCards()
{
    if(currentCard<52)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//retrun next card
Card DeckOfCards::dealCard()
{
    int a=currentCard;
    currentCard++;
    return deck[a];
}
