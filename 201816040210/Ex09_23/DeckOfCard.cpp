#include <iostream>
#include <cstring>
#include <vector>
#include <ctime>
#include "DeckOfCards.h"
#include "Card.h"
using namespace std;
//constructor function
DeckOfCards::DeckOfCards()
{
    for(int j=0;j<=3;++j)
    {
        for(int i=0;i<=12;++i)//push_back new cards
        {
            Card newCard(i,j);
            deck.push_back( newCard );
        }
    }
    currentCard = 0;
}//end function
//function to shuffle
void DeckOfCards::shuffle()
{
    Card tC(0,0);
    srand(time(NULL));
    for(int i=0;i<52;++i )
    {
        int  t = rand()%52;
        if( i!=t )//change two cards
        {
            tC = deck[t];
            deck[t] = deck[i];
            deck[i] = tC;
        }
    }
}//end function
//function to return next card
Card DeckOfCards::dealCard()
{
    return deck[currentCard++];
}//end function
//function to judge last card
bool DeckOfCards::moreCards()
{
    if(currentCard==52)
        return true;
    else
        return false;
}//end function
