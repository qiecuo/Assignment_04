#include "Card.h"
#include <vector>
#include <iostream>
#include "DeckOfCards.h"
using namespace std;

DeckOfCards::DeckOfCards()
{
    // construct a deck of cards from 4 kinds of suits and 13 kinds of faces
    for (int j = 0; j < 4; j++)
        for (int i = 0; i < 13; i++)
        {
            Card card(i, j);
            deck.push_back(card); // push it into deck
        }
    currentCard = 51; // change the number of cards in deck
}

void DeckOfCards::shuffle()
{
    srand(time(NULL));           // a seed of random
    for (int i = 0; i < 52; i++) // for each card ,choose a card to swap them both
        swap(deck[i], deck[rand() % 52]);
}

bool DeckOfCards::moreCards() // judge
{
    return currentCard == -1 ? false : true;
}

Card DeckOfCards::dealCard() // return a card and change the number of cards
{
    Card card = deck[currentCard];
    currentCard--;
    return card;
}
