//Ex09_23.cpp

#include <iostream>
#include "Card.h"
#include "DeckOfCards.h"
using namespace std;

int main()
{
    //declare object of class DeckOfCards 
    DeckOfCards deckOfCards;
    deckOfCards.shuffle();//shuffle
    for (int i=0; i < 52; i++)
    {
        cout <<deckOfCards.dealCard().toString()<<endl;
        if (deckOfCards.moreCards())
            break;
    }

    return 0;
}
