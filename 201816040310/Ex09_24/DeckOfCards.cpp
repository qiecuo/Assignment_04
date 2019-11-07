#include "Card.h"
#include <vector>
#include <iostream>
#include <ctime>
#include "DeckOfCards.h"
using namespace std;

DeckOfCards::DeckOfCards()
{
    for (int j = 0; j < 4; j++)
        for (int i = 0; i < 13; i++)
        {
            Card card(i, j);
            deck.push_back(card);
        }
    currentCard = 51;
}

void DeckOfCards::shuffle()
{
    srand(time(NULL));
    for (int i = 0; i < 52; i++)
    {
        swap(deck[i], deck[rand() % 52]);
    }
}

bool DeckOfCards::moreCards()
{
    return currentCard == -1 ? false : true;
}

Card DeckOfCards::dealCard()
{
    Card card = deck[currentCard];
    currentCard--;
    return card;
}
