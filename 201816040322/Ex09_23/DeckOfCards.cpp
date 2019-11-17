// Assignment_04: DeckOfCards.cpp
// Member-function definitions for class DeckOfCards.
#include "DeckOfCards.h"
#include <cstdlib>
#include <ctime>

int DeckOfCards::total = 52;

DeckOfCards::DeckOfCards ()
{
    currentCard = 0;
    for( int i = 0;i < Card::facetotal; ++i)
    {
        for( int j = 0;j < Card::suittotal; ++j)
        {
            Card card(i,j);
            deck.push_back(card);
        }
    }
    srand( time(0) );
}

void DeckOfCards::shuffle()
{
    int flag;
    Card temp;
    for( int i = 0;i < Card::facetotal * Card::suittotal; ++i)
    {
        flag = rand() % total;
        temp = deck[i];
        deck[i] = deck[flag];
        deck[flag] = temp;
    }
}

void DeckOfCards::dealCard()
{
    std::cout << deck[currentCard].toString()<< std::endl;
    ++currentCard;
}
bool DeckOfCards::moreCards()
{
    return currentCard < total;
}
