#include"DeckOfCards.h"
#include"Card.h"
#include<vector>
#include<stdlib.h>
using namespace std;

DeckOfCards::DeckOfCards(int a)
{
    int i,j;
    for(i = 0;i < 13; ++i) {
        for(j = 0; j < 4; ++j) {
            Card c(i,j);
            deck.push_back(c);
        }
    }
}

DeckOfCards DeckOfCards::shuffle()
{

    int i,j;
    for(i = 0; i < 52; ++i) {
        j=rand()%52;
        Card f=deck[i];
        deck[i]=deck[j];
        deck[j]=f;
    }
    return *this;
}

Card DeckOfCards::dealCard()
{
    ++currentCard;
    return deck[currentCard-1];

}

bool DeckOfCards::moreCard()
{
    if(currentCard <= 52)
        return true;
    else
        return false;
}
