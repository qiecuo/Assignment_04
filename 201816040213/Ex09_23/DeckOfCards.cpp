#include <iostream>
#include <cstring>
#include <vector>
#include <ctime>
#include "DeckOfCards.h"  // include definition of DeckOfCards Card from DeckOfCards.h
#include "Card.h"  // include definition of class Card from Card.h
using namespace std;

// DeckOfCards constructor
DeckOfCards::DeckOfCards()
{
    for( int i = 1; i<=4; i++ )
    {
        for( int j = 1; j<=13; j++ )
        {
            Card card ( j, i );
            deck.push_back(card);
        }
    }
}

 //shuffle the cards
void DeckOfCards::shuffle()
{
    Card tcard(0,0);
    srand(time(NULL));
    for(int i=0;i<52;i++)
    {
        //Randomly choose a card and exchange with the card i.
        int t = rand()%52;
        tcard = deck[i];
        deck[i] = deck[t];
        deck[t] = tcard;
    }

}

 //deal cards
Card DeckOfCards::dealCard(int cardNum)
{
    for( int i = 0; i<cardNum; i++)
        cout<<deck[i].toString()<<endl;
    currentCard = cardNum;
    return deck[currentCard];
}

 //judge if there are any remaining cards
bool DeckOfCards::moreCards()
{
    if(currentCard == 52)
        return false;
    else
        return true;
}
