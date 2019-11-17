#include"DeckOfCards.h"
using namespace std;
#include<array>

DeckOfCards::DeckOfCards()
{
    for(size_t i = 0; i < 13; ++i)
        for(size_t j = 0; j < 4; ++j)
           deck.push_back(Card(i , j))//add 52 cards in the deck
}

//a shuffle function that shuffles the Cards in the deck
void DeckOfCards::shuffle()
{

}


